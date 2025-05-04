class Solution {
public:
    void backtrack(vector<int>&candidates,int target, vector<vector<int>>&ans, int index, vector<int>&ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }

        for(int i = index; i <candidates.size(); i++){
            if(i > index && candidates[i-1] == candidates[i])continue;
            if (candidates[i] > target) break;

            ds.push_back(candidates[i]);
            backtrack(candidates,target - candidates[i],ans,i+1,ds);
            ds.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, ans, 0,ds);
        return ans;
    }
};