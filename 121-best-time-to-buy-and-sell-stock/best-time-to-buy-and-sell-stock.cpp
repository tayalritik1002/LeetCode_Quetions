class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int  ans=0;
       int min_here=prices[0];

       for(int i=1;i<prices.size();i++){
        ans=max(ans,prices[i]-min_here); 
        min_here=min(min_here,prices[i]); 
       } 
       return ans;
        
    }
};