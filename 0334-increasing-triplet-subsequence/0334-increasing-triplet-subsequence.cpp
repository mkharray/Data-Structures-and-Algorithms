class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3)
            return false;
        int i = nums[0];
        int j = INT_MAX;
        int k = INT_MAX;
        
        for(int a : nums){
            if(a <= i)
                i = a;
            else if(a <= j)
                j = a;
            else if(a >= j && a >= i)
                return true;
        }
        return false;
    }
};