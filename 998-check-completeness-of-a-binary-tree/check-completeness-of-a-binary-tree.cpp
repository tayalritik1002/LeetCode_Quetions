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
int countNode(TreeNode* root){
    if(!root)return 0;
    int l=countNode(root->left);
    int r= countNode(root->right);
    return l+r+1;
}
bool iscomplete(TreeNode* root,int i,int &n){
    if(!root) return true;
    if(i>n)return false;
    return iscomplete(root->left,2*i,n) && iscomplete(root->right,2*i+1,n);
}
    bool isCompleteTree(TreeNode* root) {
        int n=countNode(root);
        int i=1;
        return iscomplete(root,i,n);
        
    }
};