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
    bool Validate(TreeNode* root, long long min_val, long long max_val){
        if(!root)
        return true;

        if(root->val >= max_val || root->val <= min_val)
        return false;

        return(Validate(root->left, min_val, root->val) && Validate(root->right, root->val, max_val));
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
        return true;

        //Value for left should always be less than root & vice versa
        //Therefore sending max value as root's for left & vice versa
        return(Validate(root->left,LONG_MIN, root->val) && Validate(root->right, root->val, LONG_MAX)); 
    }
};