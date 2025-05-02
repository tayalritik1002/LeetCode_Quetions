class Solution {
public:
  void combo(vector<int>&arr,vector<vector<int>>&ans,vector<int>&store,int index,int target){
if(target==0){
    ans.push_back(store);
    return;
}
  if(target<0 || index>=arr.size()){
    return ;
  }
  store.push_back(arr[index]);
  combo(arr,ans,store,index,target-arr[index]);
  store.pop_back();
  combo(arr,ans,store,index+1,target);  
  }   
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int index=0;
    vector<vector<int>>ans;
    vector<int>store;
    int sum=0;
    combo(candidates,ans,store,index,target);
    
    return ans;
    
    }
};
