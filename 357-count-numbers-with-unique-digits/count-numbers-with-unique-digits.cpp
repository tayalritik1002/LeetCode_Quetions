class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {

        int prev_D=0;
        int prev_ND=1; long long d,nd;
        int prev_noOfDigits=0;

        vector<int>ans(n+1,1);
        for(int i=1;i<=n;i++){
            d=prev_D*10+prev_noOfDigits*prev_ND;
            nd=pow(10,i)-pow(10,i-1)-d;
            cout<<nd;
            ans[i]=ans[i-1]+nd;
            cout<<ans[i];
            prev_D=d;
            prev_ND=nd;
            prev_noOfDigits++;
        }
        return ans[n];

        
    }
};