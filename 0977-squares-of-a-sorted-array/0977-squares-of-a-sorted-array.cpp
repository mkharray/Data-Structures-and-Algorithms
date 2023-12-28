class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0; 
        int r = nums.size()-1;
        vector<int>v = nums;
        int end = r;
        while(l <= r){
            if( (nums[l] * nums[l]) > (nums[r]*nums[r]) )
            {
                v[end] = nums[l] * nums[l];
                l++;
        }
            else{
                v[end] = nums[r] * nums[r];
                r--;
            }
            end--;
        }
        return v;
    }
};