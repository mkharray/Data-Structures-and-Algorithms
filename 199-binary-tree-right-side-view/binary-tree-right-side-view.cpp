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
    
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
        return{};

        vector<int>v;
        q.push(root);

        int last_el;
        while(!q.empty()){
            int sz = q.size();
    
            for(int i = 0; i < sz; i++){
            TreeNode* node = q.front();
            q.pop();

            if(node)
            last_el = node->val;

            if(node->left)
            q.push(node->left);

            if(node->right)
            q.push(node->right);
            }
            v.push_back(last_el);
        }
        return v;
    }
};