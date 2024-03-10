class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int currElement=nums[i];
            int remainingNum=target-currElement;
            if(mp.find(remainingNum)!=mp.end()) return {mp[remainingNum],i};
            mp[currElement]=i;
        }
        return {-1,-1};
        
    }
};