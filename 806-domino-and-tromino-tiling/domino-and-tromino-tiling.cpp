class Solution {
public:
    int numTilings(int n) {
        vector<unsigned long long>dp(max(n,3)+1,1);
        dp[1]=1;
        dp[2]=2;
        if(n<=2)return dp[n];
        for(int i=3;i<=n;i++){
            dp[i]=(2*dp[i-1]+dp[i-3])%1000000007;
        }
        return dp[n];
        
        
        
    }
};