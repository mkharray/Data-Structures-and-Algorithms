class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0;
        int j ;
        int k = 0;
        int count = 0;
        while(k < s.length()-1 ){
            j = i+1;
            k = j+1;
            if( s[i] != s[j] && s[i] != s[k] && s[j] != s[k])
                count++;
            
            cout<<s[i]<<s[j]<<s[k]<<endl;
            i++;
        }
        return count;
    }
};