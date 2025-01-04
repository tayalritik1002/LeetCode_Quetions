class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0;
        for(char i='a';i<='z';i++){
            int start=s.find(i);
            if(start==string::npos)continue;
            int end=s.find_last_of(i);
            if(start!=end){
               ans+= unordered_set<char>(s.begin()+start+1,s.begin()+end).size();
            }
        }
        return ans;

        
        
    }
};