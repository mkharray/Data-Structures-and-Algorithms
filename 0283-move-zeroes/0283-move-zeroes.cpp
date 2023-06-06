class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = 0;
        for(auto it = nums.begin(); it != nums.end() ; ){
            if(*it == 0){
                c++;
                it = nums.erase(it);
            } else {
                ++it;
            }
        }
        for(int i = 0; i < c; i++)
            nums.push_back(0);
    }
};