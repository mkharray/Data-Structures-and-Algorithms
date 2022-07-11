class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int product = 1;
        int countzero = 0;
        for(int  i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            countzero++;
        }
            else
            product *=nums[i];
        }
        
        vector<int>ans;
        for(int  i = 0; i < nums.size(); i++){
        if(nums[i] == 0 && countzero == 1)
            ans.push_back(product);
        else if( countzero > 0)
            ans.push_back(0);
            else
                ans.push_back(product/nums[i]);
        }
        
        return ans;
    }
};