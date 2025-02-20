class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            string pref =strs[0];
            int preflen=pref.size();
            for(int i=1;i<strs.size();i++){
                string s=strs[i]; // flow
                while(preflen>s.length() || pref!=s.substr(0,preflen)){
                    preflen--;// 3 
                    if(preflen==0)return "";
                    pref=pref.substr(0,preflen);// fl
                }
                
            }
            return pref;

    }
};