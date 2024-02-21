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
    //DFS APPROACH
    int height(TreeNode* root){
        if(root == NULL)
        return 0;
        if(!root->left && !root->right){
            return 1;
        }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);           //Stores address
        int sum = 0;
        while(!q.empty()){
            int s = q.size();
            sum = 0;
            for(int i =0; i< s;i++){
            TreeNode*curr = q.front(); //New node to store the actual node from the address of front of the queue
            q.pop();
            sum += curr->val;            
            if(curr->left)
            q.push(curr->left);

            if(curr->right)
            q.push(curr->right);            
            }

        }
        return sum;
    }
};