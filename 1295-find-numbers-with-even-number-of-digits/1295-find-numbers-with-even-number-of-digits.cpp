class Solution {
public:
    int count(int x){
        int c = 0 ;
        while(x > 0){
            c++;
            x = x/10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(auto i : nums){
        if( count(i) % 2 == 0)
            c++;
        }
        return c;
    }
};