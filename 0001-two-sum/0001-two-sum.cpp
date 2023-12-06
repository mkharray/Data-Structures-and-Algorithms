class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> um;
        vector<int> v; 
        for(int i = 0 ; i < nums.size(); i++){
            if(um.find( target - nums[i] ) == um.end() )
                um.insert({nums[i] , i});
            else
            {
                v.push_back(i);
                v.push_back(um[target - nums[i] ]);
            }
        }
        return v;
    }
};