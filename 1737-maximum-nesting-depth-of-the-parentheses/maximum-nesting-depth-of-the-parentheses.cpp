class Solution {
public:
    int maxDepth(string s) {
        int count=0; int ans=0;
        for(auto ch:s){
            if(ch=='('){
                count++;
                ans=max(ans,count);
            }
            else if(ch==')'){
                count--;
            }

        }
        return ans;
        
    }
};