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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>v;
        
        if(root == NULL)
        return v;

        queue<TreeNode*>q;
        q.push(root);
        int s;
        
        vector<int>lvl;
        while(!q.empty()){
            s = q.size();
            lvl.clear();
            for(int i = 0; i < s; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(curr)
                lvl.push_back(curr->val);

                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
            v.insert(v.begin(), lvl);
        }

        return v;
    }
};