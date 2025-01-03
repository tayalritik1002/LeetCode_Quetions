class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        if(nums.size()==1)return 1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1;
        int ans_max=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1])ans++;
            else if(nums[i]+1<=nums[i+1]) ans=1;
            ans_max=max(ans_max,ans);
        }
        return ans_max;   
    }
};