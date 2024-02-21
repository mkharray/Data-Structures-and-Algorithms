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
    void pathsum(bool &check, TreeNode*root, int targetsum){
        if(check == true)
        return;
        if(root == NULL)
        return;
        if(root->left == NULL && root->right == NULL && (targetsum-root->val == 0))
        {
            check = true;
            return;
        }
        pathsum(check,root->left,(targetsum-root->val));
        
        pathsum(check,root->right,(targetsum-root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       bool check = false;
       pathsum(check, root, targetSum); 
       return check;
    }
};