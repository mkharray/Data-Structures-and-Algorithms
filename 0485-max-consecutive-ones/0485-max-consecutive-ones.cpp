class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x = 0;
        int y = 0;
        
        int ans = 0;
        for(int i = 0; i < nums.size() ; i ++){
            
            if (nums[i] == 0){
                ans = max(ans, x);
                x = 0;
            }
            else if(nums[i] == 1)
                x++;
        }
         ans = max(ans, x);
    return ans;
    }
};