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
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum = 0;
        while(!q.empty() )
        {
            int sz = q.size();

            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(!curr)
                break;

                if(curr->left){
                    q.push(curr->left);
                    TreeNode* left = curr->left;
                    if(!left->left && !left->right)
                    sum+=left->val;
                }
                if(curr->right)
                q.push(curr->right);
            }
        }
        return sum;
    }
};