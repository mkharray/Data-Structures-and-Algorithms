class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE's VOTING ALGORITHM

        int maj = -1;
        int c = 0;

        for(int i : nums){
            if(c == 0){
                maj = i;
            }
            if(maj == i)
            c++;
            else
            c--;
        }
        c = 0;
        for(int i : nums){
            if(i == maj)
            c++;
        }
        if(c >= (nums.size()/2))
        return maj;
        else
        return -1;
    }
};