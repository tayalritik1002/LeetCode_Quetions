class Solution {
public:
// n-> is current index of house
int usingRecursion(vector<int>& nums,int n){
    if(n<0)return 0;
    if(n==0)return nums[0];
    // include
    int inc=usingRecursion(nums,n-2)+nums[n];
    // exclude
    int exc=usingRecursion(nums,n-1)+0;

    return max(inc,exc);
}
int memoisation(vector<int>&nums,int n,vector<int>&dp){
    if(n<0)return 0;
    if(n==0)return nums[0];
    if(dp[n]!=-1)return dp[n];
     int inc=memoisation(nums,n-2,dp)+nums[n];
    // exclude
    int exc=memoisation(nums,n-1,dp)+0;
    dp[n]=max(inc,exc);
    return dp[n];

}
int tabulation(vector<int>&nums,int n){
    // create a dp array
    vector<int>dp(n+1,0);
    // base case
    dp[0]=nums[0];
    for(int i=1;i<=n;i++){
        int temp=0;
        if(i-2>=0)temp=dp[i-2];
        // include
        int inc=temp+nums[i];
        //exclude
        int exc=dp[i-1]+0;
        dp[i]=max(inc,exc);
    }
    return dp[n];
}
int spaceOptimization(vector<int>&nums,int n){
   int  prev2=0;
   int  prev1=nums[0];
   int curr=0;
   for(int i=1;i<=n;i++){
       int temp=0;
       if(i-2>=0)temp=prev2;
       // include
       int inc=temp+nums[i];
       // exclude
       int exc=prev1+0;
       curr=max(inc,exc);
       prev2=prev1;
       prev1=curr;

   }
   return prev1;
    
}
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        // vector<int>dp(n+1,-1);
        // return usingRecursion(nums,n);
        // return memoisation(nums,n,dp);
        // return tabulation(nums,n);
        return spaceOptimization(nums,n);

    }
};