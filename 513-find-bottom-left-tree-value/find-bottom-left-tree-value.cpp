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
    int findBottomLeftValue(TreeNode* root) {
       queue<TreeNode*>q;
       if(!root->left && !root->right)
       return root->val;

       q.push(root);

       int ans;

       while(q.empty() == false){
           int sz = q.size();
           bool leftmost = false; 
           for(int i = 0; i < sz; i++){
               TreeNode* node = q.front();
               q.pop();

               if(node && leftmost == false){
               ans = node->val;
               leftmost = true;
               }
               if(node->left)
               q.push(node->left);

               if(node->right)
                q.push(node->right);
               
           }
       } 
       return ans;
    }
};