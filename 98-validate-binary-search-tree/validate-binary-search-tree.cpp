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
    bool Valid(TreeNode* root, long long minn, long long maxx){
        if(root == NULL)
        return true;
        if(root->val >= maxx || root->val <= minn)
        return false;

        return ( Valid(root->left, minn, root->val) && Valid(root->right, root->val, maxx));
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
        return true;
        
        return( Valid(root->left, LONG_MIN, root->val) && Valid(root->right, root->val, LONG_MAX));

    }
};