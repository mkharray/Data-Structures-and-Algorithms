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
    vector<string>ans;

    void solve(TreeNode* root, string s){
        if(root == NULL)
        return;

        s = s+to_string(root->val);
        if(!root->left && !root->right)
        ans.push_back(s);

        if(root->left){
        solve(root->left, s);
        }

        if(root->right){
        solve(root->right, s);
        }

    }
    int sumNumbers(TreeNode* root) {
        solve(root, "");
        int result = 0;
        for(string s : ans){
        result+= stoi(s);
        }
        return result;
    }
};