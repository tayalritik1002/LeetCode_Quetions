/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        if( head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp = head;
        ListNode* prev = nullptr;
        bool isHeadUpdated = false;

        while( temp != nullptr && temp->next != nullptr )
        {
            ListNode* nxt = temp->next->next;
            ListNode* sec = temp->next;

            sec->next = temp;
            temp->next = nxt;

            if( prev != nullptr )
            {
                prev->next = sec;
            }

            if(!isHeadUpdated)
            {
                head = sec;
                isHeadUpdated = true;
            }

            prev = temp;
            temp = nxt;
        }
        return head;
    }
};