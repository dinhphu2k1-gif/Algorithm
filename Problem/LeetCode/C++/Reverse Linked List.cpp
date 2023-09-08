struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode *cur;
        ListNode *prev = nullptr;

        while (head->next != nullptr) {
            cur = head;
            head = head->next;
            cur->next = prev;
            prev = cur;
        }

        head->next = prev;

        return head;
    }
};