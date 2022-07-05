class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0, high = sqrt(c),temp;
        
        while(low<=high){
            temp = (low*low)+(high*high);
            if(temp == c)
                return true;
            else if(temp > c)
                high--;
            else 
                low++;
        }
        return false;
    }
};