class Solution {
public:
    bool solve(string &s, unordered_set<string> &st, int idx, vector<int> &dp, int n) {
  
        if (idx == n) return true;

        // Return cached result if already computed.
        if (dp[idx] != -1) return dp[idx];

        // Try to split the string at every possible length from idx to n.
        for (int l = 1; idx + l <= n; l++) {
            string temp = s.substr(idx, l);
            // If substring exists in the dictionary and the rest of the string can be split
            if (st.find(temp) != st.end() && solve(s, st, idx + l, dp, n)) {
                return dp[idx] = true;
            }
        }

        // If no valid split is found, mark this index as false.
        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string> &wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        int n = s.length();
        vector<int> dp(n, -1); // Use -1 for uncomputed states (instead of `false`).
        return solve(s, st, 0, dp, n);
    }
};
