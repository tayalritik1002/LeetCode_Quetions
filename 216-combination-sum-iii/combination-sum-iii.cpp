class Solution {
public:
void solve(int k,int n,int i,vector<vector<int>>&ans,vector<int>&temp,vector<int>&count){
    if(n==0 || i>=count.size()){
        if(temp.size()==k && n==0){
            ans.push_back(temp);
            
        }
        return;
    }
if(n>=count[i]){
    temp.push_back(count[i]);
    solve(k,n-count[i],i+1,ans,temp,count);
    temp.pop_back();
    solve(k,n,i+1,ans,temp,count);
}

}


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>count{1,2,3,4,5,6,7,8,9};
        solve(k,n,0,ans,temp,count);
        return ans;
        
    }
};