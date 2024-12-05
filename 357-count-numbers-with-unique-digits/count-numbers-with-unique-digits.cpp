class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        int count_unique=10; // unique digit for n==1;
        if(n==1)return count_unique;
        int temp=9,curr=9;
        for(int i=2;i<=n;i++){
            curr*=temp;
            count_unique+=curr;
            temp--;

        }
        return count_unique;    
    }
};