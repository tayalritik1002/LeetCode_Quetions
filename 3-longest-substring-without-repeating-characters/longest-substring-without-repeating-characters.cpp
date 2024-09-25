class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0; int st=s.length();

        for(int i=0;i<st;i++){
            int hash[256]={0};
            for(int j=i;j<st;j++){
                if(hash[s[j]]==1)break;
                int len=j-i+1;
                maxlen=max(maxlen,len);
                hash[s[j]]=1;
            }
        }
        return maxlen;
    }
};