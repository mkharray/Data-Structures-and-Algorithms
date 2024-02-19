class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag = 0;
        if(nums.size() <= 1)
        return true;
        for(int i = 1; i < nums.size();i++){
            if(nums[i] >= nums[i-1])
            flag++;
        }
        if(flag == nums.size()-1)
        return true;

        flag = 0;
        for(int i = 1; i < nums.size();i++ ){
            if(nums[i] <= nums[i-1])
            flag++;
        }
        if(flag == nums.size()-1)
        return true;

        return false;        
    }
};