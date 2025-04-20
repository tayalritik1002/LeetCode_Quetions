class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_here=0;
        int ans=INT_MIN;

        for(int i=0;i<n;i++){
            max_here+=nums[i];
            ans=max(ans,max_here);
            if(max_here<0)max_here=0;
        }
        return ans;
        
    }
};