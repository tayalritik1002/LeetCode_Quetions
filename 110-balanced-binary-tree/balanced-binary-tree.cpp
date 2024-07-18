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
int  solve(TreeNode* root,bool &isans){
    if(root==NULL)return 0;
    int lh=solve(root->left,isans);
    int rh=solve(root->right,isans);
    if(abs(lh-rh)>1)isans=false;
    return 1+max(lh,rh);

}

    bool isBalanced(TreeNode* root) {
        bool isans=true;
       int a= solve(root,isans);
        return isans;
        
    }
};