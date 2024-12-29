class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int xo=0;
        // for(int i=0;i<nums.size();i++){
        //     xo^=nums[i];
        // }
        // return xo;

        unordered_map<int,int>mp;
        for(auto s:nums){
            mp[s]++;
        }
        int ans;

        for(auto i:mp){
            if(i.second==1){ans= i.first;
            break;}
        }
        return ans;

    }
};