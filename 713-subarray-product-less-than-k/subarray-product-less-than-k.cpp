class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int i = 0; int j = 0;
        int ans = 0;
        if(k <= 1) return 0;

        while(j < nums.size()){
            product *= nums[j];
            
            while(product >= k){
                product/=nums[i];
                i++;
            }
            ans+= (j-i+1);
            j++;
        }
        return ans;
    }
};