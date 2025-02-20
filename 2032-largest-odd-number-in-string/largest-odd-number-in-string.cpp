class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int ind=-10;
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
                ind=i;
                break;
            }
        }
        if(ind==-10)return ans;
        ans=num.substr(0,ind+1);
        return ans;
       
        
    }
};