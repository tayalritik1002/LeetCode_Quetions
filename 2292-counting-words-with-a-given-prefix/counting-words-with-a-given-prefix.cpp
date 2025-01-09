class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count=0;
        for(auto s:words){
            bool flag=true;
            for(int i=0;i<pref.length();i++){
                if(pref[i]!=s[i]){flag=false; break;}
            }
            if(flag)count++;
        }
        return count;
    }
};