class Solution {
public:
    int getIndex(vector<int>nums, int x, bool getFirst){
        int high = nums.size()-1;
        int low = 0;
        int mid;
        int ans = -1;
        while(low <= high){
            mid = low +(high-low)/2;
            if(nums[mid] == x){
                ans = mid;
                if(getFirst == true){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else if(nums[mid] < x)
            low = mid+1;
            else
            high = mid-1;
        }
    return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
            int f = getIndex(nums, target,true);
            int l = getIndex(nums,target,false);

            return {f,l};
            }
};