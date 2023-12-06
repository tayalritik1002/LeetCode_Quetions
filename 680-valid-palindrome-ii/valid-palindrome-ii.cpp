class Solution {
public:
bool solve(string s,int start,int end){
    while(start<=end){
    if(s[start]!=s[end])return false;
    else{
        start++; end--;
    }
    }
    return true;
}

    bool validPalindrome(string s) {
        int start=0,end=s.length()-1;
        while(start<=end){
            if(s[start]!=s[end]){
                return solve(s,start+1,end) || solve(s,start,end-1);
            }
            else{
                start++; end--;
            }
        }
        return true;

    }
};