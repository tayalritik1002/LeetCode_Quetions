class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& path, int start) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // \U0001f525 Pruning Step:
            if (candidates[i] > target) {
                break; // No point checking further
            }

            // Choose the number
            path.push_back(candidates[i]);

            // Since we can reuse the same number, we pass i (not i+1)
            backtrack(candidates, target - candidates[i], ans, path, i);

            // Undo the choice (backtrack)
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // \U0001f525 Sort first for pruning
        vector<vector<int>> ans;
        vector<int> path;
        backtrack(candidates, target, ans, path, 0);
        return ans;
    }
};
