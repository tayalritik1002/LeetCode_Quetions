class Solution {
public:
    int maxScore(string s) {
       int n=s.length(),sum=0,temp,ans=0;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        if(s[i]=='0')sum++;
        arr[i]=sum;
       }

       for(int i=0;i<n-1;i++){
        temp=arr[i];
        temp+= n-(i+1)-(sum-arr[i]);
        ans=max(ans,temp);
       }
       return ans;
    
        
    }
};