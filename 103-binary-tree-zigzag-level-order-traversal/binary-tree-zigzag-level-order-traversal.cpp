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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>v;
        
        if(root == NULL)
        return v;

        queue<TreeNode*>q;
        q.push(root);
        int s;
        int c = 0;
        vector<int>lvl;
        while(!q.empty()){
            s = q.size();
            lvl.clear();
            for(int i = 0; i < s; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(curr){
                if(c%2 == 0)
                lvl.push_back(curr->val);
                else
                lvl.insert(lvl.begin(),curr->val);
                }
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
            v.push_back(lvl);
            ++c;
        }
        return v;
    }
};