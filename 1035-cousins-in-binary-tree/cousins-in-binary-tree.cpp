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
    int level(TreeNode*root,int x,int lvl){
        if(!root)
        return false;
        if(root->val == x)
        return lvl+1;

        int l = level(root->left, x, lvl+1);
        
        int r = level(root->right, x, lvl+1);

        return(max(l,r));
    }
    bool isSiblings(TreeNode*root, int x,int y ){
        if(root == NULL)
        return false;

        if(root->left && root->right){
            if(root->left->val == x && root->right->val == y)
            return true;
            else if(root->left->val == y && root->right->val == x)
            return true;
            }
            bool left = isSiblings(root->left, x,y);
            bool right = isSiblings(root->right,x,y);
            
            if(left || right)
            return true;

            return false;

         }
    bool isCousins(TreeNode* root, int x, int y) {
        int x_level = level(root,x,0);
        int y_level = level(root,y,0);

        if(y_level != x_level)
        return false;

        if(isSiblings(root,x,y) == true)
        return false;

        return true;    
    }
};