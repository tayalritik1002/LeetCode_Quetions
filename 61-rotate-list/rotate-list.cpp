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
    int count=0;
    ListNode* temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        int len=length(head);
        int  breakloop=k%len;
        breakloop=len-breakloop;
        if(breakloop==len)return head;
        int j=0;
        ListNode* temp=head;
        ListNode* firsthead=head;
        while(temp){
            j++;
            if(j==breakloop){
                firsthead=temp->next;
                temp->next=NULL;
                break;
            }
            temp=temp->next;
        }
        temp=firsthead;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return firsthead;
    }
};