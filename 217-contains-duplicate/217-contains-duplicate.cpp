class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev;
        for(int i = 1; i < nums.size(); i++){
            prev = nums[i-1];
            if(nums[i] == prev){
            return true;
            }
        }
        return false;
    }
};