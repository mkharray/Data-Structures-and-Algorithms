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
    bool find(unordered_set<int>&s, TreeNode* root, int k){
        if(root == NULL)
        return false;
        if(s.find(k-root->val) != s.end())
        {
            return true;
        }
        else{
            s.insert(root->val);
            cout<<root->val<<" ";
        }
        bool left = find(s,root->left,k);
        bool right = find(s,root->right,k);
        return(left || right);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s;
        bool ans = find(s,root,k);
        return ans;


    }
};