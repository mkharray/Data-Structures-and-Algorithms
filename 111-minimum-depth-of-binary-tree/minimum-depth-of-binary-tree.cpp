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
    int dep(TreeNode* root){
        if(!root)
        return 0;

        int l = dep(root->left);
        int r = dep(root->right);

        if(l != 0 && r!= 0)
        return (min(l,r)+1);
        else
        return(max(l,r)+1);
    }
    int minDepth(TreeNode* root) {
        return dep(root);
    }
};