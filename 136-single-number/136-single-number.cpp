class Solution {
public:
    int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
        int ans;
        int compare = 1;
        if(nums.size() == 1)
            return nums[0];
        else{
    for(int i = 0; i < nums.size(); i=i+2){
            if(nums[i] != nums[compare]){
                ans =  nums[i];
                break;
            }
            else
                compare+=2;
        }
    }
        return ans;
    }
};