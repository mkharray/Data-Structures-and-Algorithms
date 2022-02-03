class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for(auto i : operations){
        if(i[1] == '+')
            count++;
            else
                count--;
        }
        return count;
    }
};