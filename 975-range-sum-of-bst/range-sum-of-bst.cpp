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
    void sumBST(TreeNode* root, int &sum, int low, int high){
        if(root == NULL)
        return;

        if(root->val >= low && root->val <= high)
        sum+= root->val;

        sumBST(root->left,sum,low,high);
        sumBST(root->right,sum,low,high);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        sumBST(root, sum, low, high);
        return sum;
    }
};