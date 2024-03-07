class Solution {
public:
    string minWindow(string s, string t) {
        int lenS=s.length();
        int lenT=t.length();
        int ansindex=-1;
        int anslen=INT_MAX;
        int  start=0;
        if(lenT>lenS)return "";
        unordered_map<char,int>mps;
        unordered_map<char,int>mpt;
        // to keep track string t chars
        for(int i=0;i<lenT;i++){
            char ch=t[i];
            mpt[ch]++;
        }
        int count=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            mps[ch]++;
            // count increase if valid charcter jo pattern me ho
            if(mps[ch]<=mpt[ch])count++;

            if(count==lenT){
                // minimize the window-> freq decrement, ans update, start ko aage badhana
                while(mps[s[start]]>mpt[s[start]] || mpt[s[start]]==0){
                    if(mps[s[start]]>mpt[s[start]])mps[s[start]]--;
                    start++;
                }
                // answer update
                int lenOfWindow=i-start+1;
                if(lenOfWindow<anslen){
                    anslen=lenOfWindow;
                    ansindex=start;
                }
            }

        }
        if(ansindex==-1)return "";
        else return s.substr(ansindex,anslen);
 
    }
};