class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>nums, int start, vector<int>&temp){

        
        v.push_back(temp);

        for(int i = start; i < nums.size(); i++){
            temp.push_back(nums[i]);
            solve(nums,i+1,temp);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>temp;
        solve(nums,0, temp);
        return v;
    }
};