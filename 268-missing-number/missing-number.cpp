class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        int sum = (l)*(l+1)/2;
        for(int i : nums)
        sum-=i;

        return sum;
    }
};