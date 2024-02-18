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
    bool isUni(int x, TreeNode* root){
        if(root == NULL)
        return true;
        
        if (x != root->val)
        return false;

        return ( isUni(x, root->left) && isUni(x,root->right));
    }
    bool isUnivalTree(TreeNode* root) {
        return (isUni(root->val, root));
    }
};