class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxi = INT_MIN;
        int pre=1; int post =1; int n=nums.size();

        for(int i=0;i<n;i++){
            if(pre==0 )pre=1;
            if(post==0)post=1;
            pre*=nums[i];
            post*=nums[n-i-1];
            maxi=max(maxi,max(pre,post));
        }
        return maxi;

    }
};