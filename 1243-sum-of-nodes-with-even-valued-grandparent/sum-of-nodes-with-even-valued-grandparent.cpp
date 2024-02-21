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
    int grandparent(TreeNode*root,int lev){
            if(root == NULL)
            return 0;

            if(lev == 2){
                return root->val;
            }

            return( grandparent(root->left,lev+1) + grandparent(root->right,lev+1));
    }
    int sumEvenGrandparent(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum = 0;

        while(!q.empty()){
            int s = q.size();

            for(int i = 0; i < s; i++){
            TreeNode* curr = q.front();
            q.pop();
            if( (curr->val)%2 == 0 )
            sum+=grandparent(curr,0);

            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);

            }
        }
        return sum;
    }
};