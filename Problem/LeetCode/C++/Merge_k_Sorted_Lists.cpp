#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        // if(!lists.size()) return nullptr;
        // map <int, int> array;

        // for (int i = 0; i < lists.size(); i++) {
        //     ListNode *p = lists.at(i);

        //     while (p){
        //         array[p->val] += 1;
        //         p = p->next;
        //     }
        // }

        // ListNode dummy(0);
        // ListNode *p = &dummy;
        // for (auto &it : array){
        //     // cout << it->first << " " << it->second << endl;

        //     while (it.second){
        //         ListNode *node = new ListNode(it.first);
        //         p->next = node;
        //         p = p->next;
        //         it.second -= 1;
        //     }
        // }

        // return dummy.next;
        auto it{lists.begin()};
        while (it != lists.end() && !(*it))
        {
            ++it;
        }
        ListNode *list{};
        ListNode *last{};
        std::vector<int> vector;
        if (it != lists.end())
        {
            last = list = *it++;
            vector.push_back(last->val);
            while (last->next)
            {
                last = last->next;
                vector.push_back(last->val);
            }
        }
        while (it != lists.end())
        {
            if (*it)
            {
                last = last->next = *it;
                vector.push_back(last->val);
                while (last->next)
                {
                    last = last->next;
                    vector.push_back(last->val);
                }
            }
            ++it;
        }
        if (list)
        {
            std::sort(vector.begin(), vector.end());
            auto it{vector.begin()};
            last = list;
            while (last)
            {
                last->val = *it++;
                last = last->next;
            }
        }
        return list;
    }
};

int main()
{

    return 0;
}