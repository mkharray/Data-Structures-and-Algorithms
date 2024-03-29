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
    bool isSymmetric(TreeNode* root) {
       return sym(root->left,root->right);
    }
    bool sym(TreeNode* x, TreeNode *y){
        if((x == NULL && y != NULL) || (x != NULL && y == NULL) )
            return false;
        if((x == NULL && y == NULL))
            return true;
        if(x->val != y->val)
            return false;
        
        return (sym(x->left, y->right)) && (sym(x->right, y->left));
        

    }
};