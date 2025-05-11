class Solution {
public:

void solve(string& digits,vector<string>&ans,string& temp,int index,string mapping[])
{
    if(index>=digits.length()){
        ans.push_back(temp);
        return ;
    }
    int dig = digits[index]-'0';
    string value = mapping[dig];
    for(int i=0;i<value.length();i++){
        temp.push_back(value[i]);
        solve(digits,ans,temp,index+1,mapping);
        temp.pop_back();
    }

}
    vector<string> letterCombinations(string digits) {
         vector<string>ans;
        if(digits.length()==0)return ans ;
       
        string temp="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,temp,index,mapping);
        return ans;
        
    }
};