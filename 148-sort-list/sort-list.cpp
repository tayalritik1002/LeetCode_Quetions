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
    ListNode* sortList(ListNode* head) {

        vector<int>ll;
        ListNode* temp=head;
       
        while(temp){
            ll.push_back(temp->val);
            temp=temp->next;
           
        }

        temp=head;
        sort(ll.begin(),ll.end());
        for(int j=0;j<ll.size();j++){
            temp->val=ll[j];
            temp=temp->next;
        }
        return head;   
    }
};