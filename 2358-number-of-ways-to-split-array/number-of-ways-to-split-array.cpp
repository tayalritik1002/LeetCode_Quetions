class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();long long totalSum=0;
        for(auto i:nums){
            totalSum+=i;
        }
        int l=0; long long temp=0;
        for(int i=0;i<n-1;i++){
            temp+=nums[i];
            if(temp>=totalSum-temp){
                l++;
            }
        }
        return l;
        
    }
};