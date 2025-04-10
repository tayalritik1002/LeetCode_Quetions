class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int bsum=0;
        unordered_map<char, int>mp;
        for(int i=0;i<s.size();i++){
            mp.clear();
            for(int j=i;j<s.size();j++){
                char &ch=s[j];
                mp[ch]++;
                int mini=INT_MAX;
                int maxi=INT_MIN;
                for(auto each:mp){
                    maxi=max(maxi,each.second);
                    mini=min(mini,each.second);
                }
                bsum=maxi-mini;
                sum+=bsum;
            }
        }
        return sum;
    }
};