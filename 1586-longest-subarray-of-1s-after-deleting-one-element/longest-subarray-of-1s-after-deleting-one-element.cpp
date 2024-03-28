class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int notOne = 0;
        int ans = 0;

        while (j < nums.size()) {
            if (nums[j] != 1) {
                notOne++;
            }

            while (notOne > 1) {
                if (nums[i] != 1) {
                    notOne--;
                }
                i++;
            }

            ans = max(ans, j - i);
            j++;
        }

        return ans;
    }
};
