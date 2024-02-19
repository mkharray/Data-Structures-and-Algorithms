class Solution {
public:
    bool isPowerOfTwo(int n) {
        //BitMagic
        //All binary representations of 2^n have only one set bit
        //e.g 8 -> 1000
        //Also, (n-1) will be opposite to that of the multiple of 8
        //e.g 7 -> 0111
        //Therefore, if we perform & on them, we will be left with 0.
        
        
        if (n<=0)
        return false;
        
        return( (n&(n-1)) == 0);

        
    }
};