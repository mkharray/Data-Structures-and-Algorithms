class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long maxi = 0;
        for(int i : nums)
        if(maxi < i)
        maxi = i;

        int i =0, j =0;
        long long freq = 0;
        long long ans = 0;
        while(j < nums.size()){
            if(nums[j] == maxi)
            freq++;

            while(i<=j && freq >= k){

                if(nums[i] == maxi)
                freq--;

                i++;
            }
            ans+=i;
            j++;
        }
        return ans;
    }
};