class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,sumleft = 0, sumright = 0;
        
        for(auto i : nums)
            sum+= i;

        for(int i = 0; i < nums.size(); i++){
            if(i == 0)
            sumleft = 0;
            else
            sumleft += nums[i-1];
            sumright = sum - sumleft - nums[i];
            
            if(sumright == sumleft)
                return i;
        }
        return -1;
    }
};