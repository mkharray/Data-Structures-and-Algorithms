class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j = 0;
        int k = 1;
        vector<int>ans(nums.size(),0);
        for(int i : nums){
            if(i < 0){
                ans[k] = i;
                k+=2;
            }
            else{
                ans[j] = i;
                j+=2;
            }
        }
        return ans;
    }
};