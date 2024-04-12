class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int s=0; int e=n-1;
        vector<int>ans(n);
        int ind=n-1;
        while(s<=e){
            if((nums[s]*nums[s])>=(nums[e]*nums[e])){
                ans[ind--]=(nums[s]*nums[s]);
                s++;
            }
            else{
                ans[ind--]=(nums[e]*nums[e]);
                e--;
            }

        } 
        return ans;
        
    }
};