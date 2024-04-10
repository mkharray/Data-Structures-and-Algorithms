class Solution {
public:
 vector<vector<int>> ans;
 void solve(vector<int>nums, int idx, vector<int>temp){
    ans.push_back(temp);
    if(temp.size() == nums.size())
    return;

    for(int i = idx; i < nums.size(); i++){
        temp.push_back(nums[i]);
        solve(nums,i+1,temp);
        temp.pop_back();
    }
 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;

        solve(nums, 0 , temp);
        return ans;
    }
};