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
    void dfs(TreeNode* root, int depth, int target,int val){
        if(root == NULL)
        return;

        if(depth == target){
            TreeNode* node_left = new TreeNode(val);
            TreeNode* node_right = new TreeNode(val);

            if(root->left)
            node_left->left = root->left;

            if(root->right)
            node_right->right = root->right;

            root->left = node_left;
            root->right = node_right;
            
            return;
        }

        dfs(root->left,depth+1, target,val);
        dfs(root->right,depth+1, target,val);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1)
        {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        dfs(root,1,depth-1,val );

        return root;
    }
};