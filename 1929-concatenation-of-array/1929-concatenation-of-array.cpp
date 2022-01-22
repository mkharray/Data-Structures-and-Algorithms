class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
 
        int cap = nums.size();
        for(int i = 0; i < cap;i++){
        nums.push_back(nums[i]);
        }
        
        return nums;
    }
};