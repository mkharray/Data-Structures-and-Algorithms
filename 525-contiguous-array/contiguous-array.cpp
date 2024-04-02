class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if (nums.size() < 2) return 0; // Edge case: Empty array or single element

        if (nums.size() == 2) {
            return (nums[0] + nums[1] == 1) ? 2 : 0;
        }

        unordered_map<int, int> sumToIndex;
        int maxLen = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 0) ? -1 : 1;

            if (sum == 0) {
                maxLen = i + 1;
            } else if (sumToIndex.find(sum) != sumToIndex.end()) {
                maxLen = max(maxLen, i - sumToIndex[sum]);
            } else {
                sumToIndex[sum] = i;
            }
        }

        return maxLen;
    }
};
