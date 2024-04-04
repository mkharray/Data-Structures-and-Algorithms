class Solution {
public:
vector<vector<int>>v;
    void solve(vector<int>nums, int start, vector<int>&temp){
        
        v.push_back(temp);
        
        for(int i = start;i < nums.size(); i++){
        // Skip duplicate elements to avoid generating duplicate subsets
            if(i != start && nums[i-1] == nums[i])
            continue; 

            temp.push_back(nums[i]);
            solve(nums, i+1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(), nums.end());
        solve(nums,0,temp);
        return v;
    }
};