class Solution {
public:
bool solve(int start,int end,string &st){
    if(start>=end)return true;
    if(st[start]!=st[end])return false;
    return solve(start+1,end-1,st);
}
   bool isPalindrome(string s) {
    string str="";
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
        if(isalnum(s[i])){
            str.push_back(s[i]);
        }
    }
    int start=0; int end=str.length()-1;
    return solve(start,end,str);
}
};