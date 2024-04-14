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
    void sumLeft(TreeNode* root, int &leftSum){
        if(!root)
        return;

        if(root->left){
            if(!root->left->left && !root->left->right)
            leftSum += root->left->val;
        }
        sumLeft(root->left, leftSum);
        
        sumLeft(root->right, leftSum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans= 0;
        sumLeft(root,ans);
        return ans;
    }
};