class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>positive;
        vector<int>negative;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0)
                negative.push_back(nums[i]);
            else
                positive.push_back(nums[i]);
        }
        int c = 0;
        for(int i = 0;i<nums.size(); i++){
            if(i % 2 == 0)
                ans.push_back(positive[c]);
            else
            {
                ans.push_back(negative[c]);
                c++;
            }
        }
        return ans;
    }
};