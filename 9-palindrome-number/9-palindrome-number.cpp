class Solution {
public:
    bool isPalindrome(long long x) {
    long long rev = 0;
        long long copy = x;
     long long rem = 0;
        while(x > 0){
            rem = x %10;
            rev = rev*10 + rem;
            x/=10;
        }
        return copy == rev;
    }
};