class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string pref=strs[0];
        int preflen=pref.size();
        for(int i=1;i<strs.size();i++){
            string curr=strs[i];
            while(preflen>curr.size() || pref!=curr.substr(0,preflen)){
                preflen--;
                pref=pref.substr(0,preflen);
            }
        }
        return pref;
        
    }
};