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
    void deepsum(int &h ,int d, TreeNode*root,int &sum){
        
        if(root == NULL)
        return ;
        if(d == h){
            sum+=root->val;
            return;
        }
        deepsum(h,d+1,root->left,sum);
        deepsum(h,d+1,root->right,sum);
        cout<<d<<" ";
    }
    int deepestLeavesSum(TreeNode* root) {
        
        
        int h = height(root);
        int sum = 0;
        deepsum(h,1, root,sum);
        return sum;
    }
};