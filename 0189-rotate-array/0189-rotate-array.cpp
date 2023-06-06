class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
        // Brute Force - TLE
        // int index = nums.size()-1;
        // int temp;
        // while(k--){
        //     temp = nums[nums.size()-1];
        //     for(index = nums.size()-1; index > 0; index--){
        //         nums[index] = nums[index-1];
        //     }
        //     nums[0] = temp;
        // }
    }
};