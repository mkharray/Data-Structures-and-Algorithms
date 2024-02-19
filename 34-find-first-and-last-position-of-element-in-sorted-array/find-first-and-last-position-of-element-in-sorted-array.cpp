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
                ans = mid;             //storing ans nevertheless
                if(getFirst == true){
                    high = mid-1;      //moving left to find first index
                }
                else{
                    low = mid+1;       //moving right to find last index
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
            int f = getIndex(nums, target,true); // true to find first index
            int l = getIndex(nums,target,false); // finding last index

            return {f,l};
            }
};