class Solution {
public:
    int numTilings(int n) {
        long long M = 1e9 + 7, a = 1, b = 1, c = n == 1 ? 1 : 2;
    for (int i=2, s=0; i<=n; i++) {
        c = (a + b + 2 * s) % M;  //  if dp[n]=dp[n-1]+dp[n-2]+2*dp[n-3]+2*dp[n-4]........2*dp[0];
                                   //s is the sum of 2*dp[n-3]+2*dp[n-4].......2*dp[0];
        cout<<c;
        s = (s + a) % M;
        a = b, b = c;
    }
    return c;
        
        
        
    }
};