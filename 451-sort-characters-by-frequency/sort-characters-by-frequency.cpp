class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(auto c:s)m[c]++;
        vector<pair<char,int>>v(m.begin(),m.end());
        string ans="";

        sort(v.begin(),v.end(), [](auto a,auto b){ return a.second>b.second;});
        for(auto x:v){
            int count=x.second;
            char c=x.first;
            ans+=string(count,c);

        }
        return  ans;

        
    }
};