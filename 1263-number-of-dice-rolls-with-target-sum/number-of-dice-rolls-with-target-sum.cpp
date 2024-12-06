class Solution {
public: 
int solve(int n,int k,int target,vector<vector<int>> &dp){
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            int count=0;
            for(int l=1;l<=k;l++){
                if(j-l>=0)
                count=(count + dp[i-1][j-l])%1000000007;
            }
            dp[i][j]=count;
        }
    }
    return dp[n][target];



}
    int numRollsToTarget(int n, int k, int target) {
       vector<vector<int>> vec(n+1, vector<int>(target+1));

        return solve(n,k,target,vec);
        
    }
};