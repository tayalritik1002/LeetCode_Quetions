class Solution {
public:
    int characterReplacement(string s, int k) {

        int max_ans=0; int n=s.length();
        for(int i=0;i<n;i++){
            int hash[26]={0};
            int max_freq=0;
            for(int j=i;j<n;j++){
                hash[s[j]-'A']++;
                max_freq=max(max_freq,hash[s[j]-'A']);
                
                int changes= (j-i+1)-max_freq;
                
                if(changes<=k){max_ans=max(max_ans,j-i+1);}
                else break;
            }
        }
        return max_ans;
    }
};