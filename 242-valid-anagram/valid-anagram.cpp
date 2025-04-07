class Solution {
public:
    bool isAnagram(string s, string t) {

        int ch[26]={0};
        for(auto c:s)ch[c-'a']++;
        for(auto c:t)ch[c-'a']--;
        for(auto i:ch){
            if(i!=0)return false;
        }
        return true;


    }
};