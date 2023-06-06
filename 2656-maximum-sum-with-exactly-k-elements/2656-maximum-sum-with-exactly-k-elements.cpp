class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int maxx = nums[nums.size()-1];
        
        int sum = 0;
        while(k--){
            sum = sum+maxx;
            maxx++;
        }
        return sum;
    }
};