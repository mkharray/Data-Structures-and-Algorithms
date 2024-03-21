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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>v;
        queue<TreeNode*>q;

        q.push(root);
        long long sum;

        while(!q.empty()){
            sum = 0;
            int sz = q.size();

            for(int i = 0;i < sz ; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(curr)
                sum+=curr->val;

                if(curr->left)
                q.push(curr->left);

                if(curr->right)
                q.push(curr->right);
            }
            v.push_back(sum);
        }
        sort(v.begin(), v.end());
        if(k > v.size() )
        return -1;

        return (v[v.size()-k]);
    }
};