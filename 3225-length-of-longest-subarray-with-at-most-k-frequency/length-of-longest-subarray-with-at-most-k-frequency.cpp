class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int i = 0;
        int j = 0;
        int res = 0;
        while(j < nums.size()){
            m[nums[j]]++;
            while(m[nums[j]] > k && i < j){
                m[nums[i]]--;
                i++;
            }
            res = max(res, (j-i+1));
            j++;
        }
        return res;
    }
};