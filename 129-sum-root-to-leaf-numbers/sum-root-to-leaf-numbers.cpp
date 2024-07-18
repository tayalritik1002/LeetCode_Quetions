/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, long long va, int& ans){

        if(root==NULL) return;
        va*=10;
        va+=root->val;
        if(!root->left && !root->right){
            ans+=va;
            return;
        }
        helper(root->left,va,ans);
        helper(root->right,va,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        helper(root,0,sum);
        return sum;
    }
};