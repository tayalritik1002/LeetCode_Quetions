class Solution {
public:
    string replaceDigits(string s) {
        string ans;  char prev = '\0';
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])==false) {
                ans+=s[i]; 
             prev=s[i];

            }
            else{
                char alpha=prev+ (s[i]-'0');
                ans+=alpha;
            }
        }
        return ans;
       
        
    }
};