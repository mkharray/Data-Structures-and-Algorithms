class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n,0);
        for(int i = 0; i < nums.size(); i++){
            v[nums[i]]++;
            if(v[nums[i]] > 1)
                return nums[i];
        }
        return 0;
    }
};