class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm 
        //O(n) time
        //O(1) space
        
        int curr= 0;
         int maxx= INT_MIN;
        for(int i = 0  ; i < nums.size();i++){
                curr+=nums[i];
               maxx= max(maxx, curr);
            
            if( (curr) < 0)
                curr = 0;
            
         
        }
            return maxx;
        }
};