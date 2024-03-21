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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int lvlsum = 0;
        int lvl = 0;
        int ans = 1;
        int maxsum = root->val;
        
        while(!q.empty()){
            int sz = q.size();
            lvlsum = 0;
            for(int i = 0; i < sz; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr)
                lvlsum += curr->val;

                if(curr->left)
                q.push(curr->left);
                
                if(curr->right)
                q.push(curr->right);

                // cout<<curr->val<<" "<<lvlsum<<endl;
            }
            ++lvl;
            // cout<<lvl<<" "<<lvlsum<<endl;
            if(maxsum < lvlsum){
                ans = lvl;
                maxsum = lvlsum;
            }
        }
        return ans;
    }
};