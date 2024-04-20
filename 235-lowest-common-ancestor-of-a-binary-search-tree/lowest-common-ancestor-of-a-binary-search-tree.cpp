/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void funLCA(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& LCA){
        if(root == NULL)
        return;

        if(p->val > root->val && q->val > root->val){
            LCA = root;
            funLCA(root->right, p, q, LCA);
            return;
        }
        else if(p->val < root->val && q->val < root->val){
            LCA = root;
            funLCA(root->left, p, q, LCA);
            return;
        }
        else if(root == p){
            LCA = p;
            return;
        }
        else if(root == q){
        LCA = q;
        return;
        }

        LCA = root;
        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* LCA = root;
        funLCA(root, p, q, LCA);
        return LCA;
    }
};