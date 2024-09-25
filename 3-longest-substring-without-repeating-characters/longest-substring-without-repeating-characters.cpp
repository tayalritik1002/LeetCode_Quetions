class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0; int st=s.length();
        if(s.length()==1)return 1;
        

        int l=0; int r=0;
        vector<int>hash(256,-1);
        // cout<<hash[10];

        while(r<st){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len=r-l+1;
             maxlen=max(maxlen,len);
            hash[s[r]]=r;
            r++;
        }

       
        return maxlen;
    }
};