class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int zeros=0,ones=0,maxlen=0;
        mp[0]=-1;

        for(int i=0;i<nums.size();i++){
            nums[i]==0 ? ++zeros : ++ones;
            int diff=zeros-ones;


            if(mp.count(diff)){
                maxlen=max(maxlen,i-mp[diff]);
            }
            else{
                mp[diff]=i;
            }
        }
        return maxlen;

        
    }
};