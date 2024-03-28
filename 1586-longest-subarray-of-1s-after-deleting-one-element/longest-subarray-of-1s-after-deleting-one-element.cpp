class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        int notOne = 0;
        int ans = 0;
        queue<int>notOneLoc;

        while(j < nums.size() ){
            if(nums[j] != 1){
            notOne++;
            notOneLoc.push(j);
            }

            if(notOne > 1){
            i = notOneLoc.front()+1;
            notOne--;
            notOneLoc.pop();
            }

            ans = max(ans, (j-i));
            j++;
        }
        return ans;
    }
};