class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        vector<int>ans{-1,-1};
        
        while(low <=high){
        mid = low +(high-low)/2;
        if(target == nums[mid]){
            high = mid-1;
            ans[0] = (mid);
        }
            else if(nums[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        
            
        
          low = 0;
         high = nums.size()-1;
          
            while(low <= high){
        mid = low +(high-low)/2;
        if(target == nums[mid]){
            low = mid+1;
                ans[1] = (mid);
        }      
            else if(nums[mid] > target)
                high = mid-1;
            else
                low = mid+1;
            }
        
    
            
            return ans;
        
    }
};