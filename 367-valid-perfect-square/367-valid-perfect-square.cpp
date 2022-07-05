class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 0, high = num, mid;
        while(low <= high){
        
        mid = low + (high-low)/2;
        if(mid*mid == num)
            return true;
            else if(mid*mid > num)
                high = mid-1;
            else
                low =mid+1;
        }
        
        return false;
    }
};