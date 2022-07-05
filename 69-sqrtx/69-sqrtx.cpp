class Solution {
public:
    int mySqrt(int x) {
        
        long long low = 0;
        long long high = x;
        long long mid,ans;
        
        if(x == 0)
            return 0; 
        while(low <= high){
            mid = low + (high - low)/2; 
            
            if(mid == 0)
                return 1;
            
            if(mid == x/mid)
                return mid;
            else if(mid > x/mid)
                high = mid-1;
            else{
                low = mid+1;
                ans = mid;
        }}
        return ans;
    }
};