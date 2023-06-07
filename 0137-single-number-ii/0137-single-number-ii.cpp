class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        if(nums.size() == 1)
            return nums[0];
        for(int i = 0; i < nums.size() - 2;){
            if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2])
                i = i+3;
            else
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};