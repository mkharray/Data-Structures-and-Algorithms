class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c = 1;
        
        if(nums.size() == 1 )
            return nums[0];
        for(int i = 1; i < nums.size();i++){
            if(nums[i-1] == nums[i])
                c++;
            else
                c = 1;
            
            if(c > nums.size()/2)
                return nums[i];
        }
        return -1;
    }
};