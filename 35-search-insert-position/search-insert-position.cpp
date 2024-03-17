class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1 ;
        int mid;
        int index = -1;
        while(r >= l ){
            mid = l+(r-l)/2;
            
            if(target == nums[mid]){
                index = mid;
                r = mid -1;
            }
            else if(target < nums[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

    if(index < 0)
    return l;

    return index;
    }
};