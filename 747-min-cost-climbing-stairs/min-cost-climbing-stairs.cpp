class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==1)return cost[0];
        int f_last=cost[0];
        int s_last=cost[1];
        int temp;
        for(int i=2;i<n;i++){
             temp=min(f_last,s_last);
            f_last=s_last;
            s_last=(cost[i]+min(temp,s_last));

        }
        return min(f_last,s_last);
  
    }
};