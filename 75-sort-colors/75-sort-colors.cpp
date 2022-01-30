class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v (3,0);
        for(auto i : nums)
            v[i]++;

        nums.clear();
            for(int i = 0; i < 3; i++){
                while(v[i] > 0){
                    nums.push_back(i);
                    v[i]--;
                }
            }
            
    }
};