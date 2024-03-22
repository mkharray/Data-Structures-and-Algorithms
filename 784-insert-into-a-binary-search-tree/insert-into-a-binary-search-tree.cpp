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
    void insert(TreeNode* root , int val, TreeNode* prevroot){
        if(root == NULL){
            TreeNode* newnode = new TreeNode(val);
            if(val < prevroot->val)
            prevroot->left = newnode;
            else
            prevroot->right = newnode;
         return;
        }
        else if(root->val < val)
        insert(root->right,val, root );
        else
        insert(root->left, val, root);


    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* newhead = new TreeNode(val);
            return newhead;
        }
        insert(root, val, root);
        return root;
    }
};