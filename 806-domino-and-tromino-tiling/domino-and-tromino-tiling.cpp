class Solution {
public:
    int numTilings(int n) {
        long long M = 1e9 + 7, a = 1, b = 2, c = 5;
        if(n==1)return a;
        if(n==2)return b;
        if(n==3)return c;
        int d;
        for(int i=4;i<=n;i++){
            d=((2*c)+a)%M;
            a=b;
            b=c;
            c=d;
        }
        return d;   
    }
};