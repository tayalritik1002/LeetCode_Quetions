class Solution {
public:
bool solve(string s){
    int flag =false;
    int n=s.length()-1;
    if ((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') &&
    (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')) {
        flag=true;
}
return flag;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vector<int>sum(words.size());
        vector<int>ans;
        int n=words.size();

        if(solve(words[0]))sum[0]=1;
        else sum[0]=0;
        for(int i=1;i<n;i++){
            (solve(words[i]))? sum[i]=sum[i-1]+1 : sum[i]=sum[i-1];
        }

        for(auto a:queries){
            (a[0]!=0)?  ans.push_back(sum[a[1]]-sum[a[0]-1])    : ans.push_back(sum[a[1]]);
        }

        return ans;


        
    }
};