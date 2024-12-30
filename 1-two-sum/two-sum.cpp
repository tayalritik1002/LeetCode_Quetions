class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int rem=0;
            rem=target-nums[i];
            if(mp.find(rem)!=mp.end() && mp[rem]!=i){
                ans.push_back(i);
                ans.push_back(mp[rem]);
                break;
            }
        }
        return ans;
        
    }
};