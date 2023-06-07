class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int c1 = 0;
        int c2 = 1;
        
        for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            ans[c2] = nums[i];
            c2+=2;
        }
        else{
            ans[c1] = nums[i];
            c1+=2;
        }
        }
        return ans;
        }
};