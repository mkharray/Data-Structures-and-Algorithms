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
    char to_char(int value){
         int x = value+'a'; // 0 = 48, a = 97
         char c = char(x);
         return c;
    }
    void dfs(TreeNode* root, string s){
        if(root == NULL)
        return;

        if(!root->right && !root->left){
           
            s = to_char(root->val)+s;
            v.push_back(s);
            return;
        }
        else{
            s = to_char(root->val)+s;
        }
        dfs(root->left, s);
        dfs(root->right, s);

    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        sort(v.begin(), v.end());
        return v[0];
    }
};