class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int cap = nums.size();
        vector<int>ans(2*cap);
        
        for(int i = 0; i < nums.size();i++){
        ans[i] = nums[i];
        }
        for(int i = 0; i < nums.size();i++){
        ans[i+cap] = nums[i];
        }
        
        return ans;
    }
};