class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        int mini = nums[0];
        int count = 0;
        for(int i = 1; i < nums.size()-1; i++){
        if(nums[i] > mini && nums[i] < maxi)
            count++;
        }
        
        return count;
    }
};