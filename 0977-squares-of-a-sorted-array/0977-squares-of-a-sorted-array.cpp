class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0; int r = nums.size();
        vector<int>ans(r);
        r--;
        for(int i = nums.size()-1; i >= 0 ; i-- ){
            if(abs(nums[l]) > abs(nums[r]) ){
                ans[i] = nums[l]*nums[l];   
                l++;
            }
            else{
                ans[i] = nums[r]*nums[r];
                r--;
            }
        }
        return ans;
    }
};