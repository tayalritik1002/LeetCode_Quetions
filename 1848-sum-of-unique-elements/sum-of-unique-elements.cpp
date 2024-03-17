class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int sum=0;
        for(auto i:mp){
            if(i.second==1)sum+=i.first;
        }
        return sum;
    }
};