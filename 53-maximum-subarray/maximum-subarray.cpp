class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxi=INT_MIN; int prev=0;
        int maxi=INT_MIN; int maxhere=0;
        for(int i=0;i<nums.size();i++){
             maxhere+=nums[i];
            if(maxhere>maxi)
            maxi=maxhere;
            if(maxhere<0)
            maxhere=0;
            // prev=max(prev+nums[i],nums[i]);
            // maxi=max(maxi,prev); 
        }
        return maxi;
    }
};