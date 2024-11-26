class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    if(n==1)return cost[0];
    vector<int>ans(n,0);
    ans[0]=cost[0];
    ans[1]=cost[1];
    for(int i=2;i<n;i++){
        cout<<ans[i-1]<<"  "<<ans[i-2]<<endl;
        ans[i]=min(ans[i-1],ans[i-2])+cost[i];
        cout<<ans[i]<<endl;
    }
    return min(ans[n-1],ans[n-2]);
        
    }
};