class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp; int ans;
        for(auto a:nums){
            mp[a]++;
        }
        for(auto b:mp){
            if(b.second==1)ans= b.first;
        }
        return ans;
        
    }
};