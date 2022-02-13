class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxx = 0;
        for(auto it: nums){
            if(m.find(it) == m.end())
                m[it] = 1;
            else{
                m[it]++;
                if(m[maxx] < m[it])
                maxx = it;
            }
        }
        if(nums.size() == 1)
            return nums[0];
        else
        return maxx;
    }
};