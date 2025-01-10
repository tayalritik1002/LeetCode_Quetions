class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int ans=0;
        unordered_map<int,int>mpp;
        mpp[0]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]; 
            if(mpp.find(sum-k)!=mpp.end()){
              ans+=mpp[sum-k]; 
            }
            mpp[sum]=mpp[sum]+1; 
            
        }
        return ans;   
    }
};