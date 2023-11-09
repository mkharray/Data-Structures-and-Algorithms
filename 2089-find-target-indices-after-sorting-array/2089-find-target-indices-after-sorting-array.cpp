class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c = 0;
        vector<int>v;
        for(int i : nums){
            if(i == target)
                v.push_back(c);
            c++;
 
            if(target < i)
                break;
           
                   }
   return v;
    }
};