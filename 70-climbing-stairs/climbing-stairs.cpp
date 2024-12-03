class Solution {
public:
    int climbStairs(int n) {

        int i=0;
        int j=1; int sum=0;
        for(int k=1;k<=n;k++){
            i=j;
            j+=sum;
            sum=i;
        }
        return j;
    
    }
};