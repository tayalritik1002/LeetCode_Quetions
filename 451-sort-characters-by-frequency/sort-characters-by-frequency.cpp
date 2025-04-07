class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int>mp;
        for(auto sp:s)mp[sp]++;
        string ans="";

        vector<pair<char,int>>v(mp.begin(),mp.end());

        sort(v.begin(),v.end(), [](auto a,auto b){return a.second>b.second;});
        for(auto it:v){
            int count=it.second;
            char ch=it.first;
            ans+=string(count,ch);
        }

        return ans;
        
    }
};