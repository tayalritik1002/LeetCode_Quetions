class Solution {
public:
    int characterReplacement(string s, int k) {

        int max_ans=0; int n=s.length();
        int l=0;int r=0;int max_freq=0; int hash[26]={0};
       
        while(r<n){
             
            hash[s[r]-'A']++;
            max_freq=max(max_freq,hash[s[r]-'A']);
            

            while((r-l+1)-max_freq>k){
                hash[s[l]-'A']--;
                max_freq=0;
                for(int p=0;p<26;p++){
                    max_freq=max(max_freq,hash[p]);
                }
                l=l+1;
            }
             
            if((r-l+1)-max_freq<=k){
                max_ans=max(max_ans,(r-l+1));
               
            }
            r++;

        }

       
        return max_ans;
    }
};