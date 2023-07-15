class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        int lastgoodindex = n;
    for(int i = n-1; i >= 0; i--){
            if((nums[i]+i) >= lastgoodindex)
                lastgoodindex = i;
    }
        return lastgoodindex == 0;
    }
};