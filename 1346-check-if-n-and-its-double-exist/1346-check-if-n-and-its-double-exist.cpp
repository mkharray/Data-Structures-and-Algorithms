class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s(arr.begin(), arr.end());
        int zerocount = 0;
        for(int j : arr)
            if (j == 0)
                zerocount++;
        
        if (zerocount > 1)
            return true; 
        
        for(int i : s){
            if(s.find(2*i) != s.end() && i != 0){
                return true;
            }
        }
        return false;
     }
};