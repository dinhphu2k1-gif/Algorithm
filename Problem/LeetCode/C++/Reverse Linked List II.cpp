struct ListNode {    
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* dummy = new ListNode(0); // create a dummy node to mark the head of this list
        dummy->next = head;

        ListNode* prev = dummy; // make a pointer pre as a marker for the node before reversing

        for(int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        ListNode* start = prev->next; // a pointer to the beginning of a sub-list that will be reversed
        ListNode* then = start->next; // a pointer to a node that will be reversed

        for (int i = 0; i < right - left; i++) {
            start->next = then->next;
            then->next = prev->next;
            prev->next = then;
            then = start->next;
        }

        return dummy->next;

    }
};