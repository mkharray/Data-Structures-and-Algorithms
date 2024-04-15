// class Solution {
// public:
//     bool isPrime(int n) {
//         if (n <= 1) return false;
//         for (int i = 2; i <= sqrt(n); i++) { 
//             if (n % i == 0) return false;
//         }
//         return true;
//     }

//     int maximumPrimeDifference(vector<int>& nums) {
    
//         int i = 0;
//         int j = nums.size() - 1;

//         while (i < j) {
//             if (isPrime(nums[i]) && isPrime(nums[j])) {
//                 return (j - i); 
//             }
//             if (!isPrime(nums[j]))
//             j--;
//             if (!isPrime(nums[i]))
//             i++;
//         }

//         return 0; 
//         }
// };

class Solution {
public:
    bool isPrime(int n){
        if(n <= 1)
        return false;

        for(int i= 2; i <= sqrt(n); i++){
            if(n % i == 0)
            return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;

      
        while (i < j) {
            if (isPrime(nums[i]) && isPrime(nums[j])) {
                return (j - i); 
            }
            if (!isPrime(nums[j]))
            j--;
            if (!isPrime(nums[i]))
            i++;
        }
        return 0;
    }
};