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
int length(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
         if(head==NULL)return head;
        if(length(head)<k)return head;

        ListNode* curr=head;
        ListNode* prev=NULL; 
        ListNode* forward;
        int count=0;

        while(count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }

        if(forward!=NULL){
            ListNode* restListHead= reverseKGroup(forward,k);
            head->next=restListHead;
        } 

        return prev;      
        
    }
};