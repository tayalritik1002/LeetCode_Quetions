class Solution {
   
public:
int solve(vector<int>& arr,int& mini,int& maxprofit){
    // base case
  for(int i=0;i<arr.size();i++){
    mini=min(mini,arr[i]);
    int profit=arr[i]-mini;
    maxprofit=max(maxprofit,profit);

  }
  return maxprofit;

}
    int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int maxi=0;
        int ans=solve(arr,mini,maxi);
        return ans;
    }

};