class Solution {
public:
    bool helper(vector<int>v, int left, int right){
        sort(v.begin()+left, v.begin()+right+1);
        
         int dif = v[left+1] - v[left];
            for(int j = left ; j < right; j++){
                if(v[j+1] - v[j] != dif )
                   return false;
                }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;

        for(int i = 0; i < l.size();i++){
            ans.push_back(helper(nums, l[i], r[i]));
        }
        return ans;
    }
};