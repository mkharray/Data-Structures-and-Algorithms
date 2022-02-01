class Solution {
public:
    void reverseString(vector<char>& s) {
    int j = 0;
        for(int i = s.size()-1; i > j; i-- )
        {
           
        swap(s[i],s[j]);    
        ++j;
        
        }
    }
};