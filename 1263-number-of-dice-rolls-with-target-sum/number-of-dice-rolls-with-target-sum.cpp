class Solution {
public: 
int solve(int n,int k,int target,vector<vector<int>> &vec){

    if(n==0)return (target==0); //agar n==0 aur target ==0 only this condition return 1 else return 0;
    if(target<0)return 0;
    if(vec[n][target]!=-1)return vec[n][target];
     int count=0;
    for(int i=1;i<=k;i++){
        count=(count+solve(n-1,k,target-i,vec))%1000000007;
    }
    return vec[n][target]=count;


}
    int numRollsToTarget(int n, int k, int target) {
       vector<vector<int>> vec(n+1, vector<int>(target+1,-1));

        return solve(n,k,target,vec);
        
    }
};