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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode* temp = head;
          if(head->next==NULL)return NULL;

          int len=0;
          while(temp){
            len++;
            temp=temp->next;

          }
          if(len==n)return head->next;
          int currlen=len-n;
          temp=head;

          for(int i=1;i<currlen;i++){
            temp=temp->next;

          }
          if(temp->next->next!=NULL)
          temp->next=temp->next->next;
          else temp->next=NULL;

          return head;
        
        
    }
};