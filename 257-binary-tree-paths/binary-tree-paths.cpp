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
    vector<string>v;

    void solve(TreeNode* root, string s){
       if(!root)
       return;

       solve(root->left,(s+to_string(root->val))+"->" );
       solve(root->right,(s+to_string(root->val))+"->" );

       if(!root->left && !root->right){
        s+= to_string(root->val);
        v.push_back(s);
       }     
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root,"");
        return v;
    }
};