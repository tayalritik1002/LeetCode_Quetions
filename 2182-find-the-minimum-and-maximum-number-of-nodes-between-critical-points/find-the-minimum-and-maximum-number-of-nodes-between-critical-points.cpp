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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans{-1,-1};
        ListNode* prev=head;
        if(!prev)return ans;
        ListNode* curr=head->next;
        if(!curr)return ans;
        ListNode* nxt=head->next->next;
        if(!nxt)return ans;

        int firstC=-1;
        int lastC=-1;
        int i=1;
        int dist=INT_MAX;
        while(nxt){
            bool isC=((curr->val>prev->val && curr->val>nxt->val )||(curr->val<prev->val && curr->val<nxt->val));
            if(isC && firstC==-1){
                firstC=i;
                lastC=i;
            }
            else if(isC){
                dist=min(dist,i-lastC);
                lastC=i;
            }
            ++i;
            prev=prev->next;
            curr=curr->next;
            nxt=nxt->next;

        }
        if(lastC==firstC)return ans;
        else{
            ans[0]=dist;
            ans[1]=lastC-firstC;
        }
        return ans;

        
    }
};