class Solution {
public:
    bool isPalin(string s){
        int j = s.size()-1;

        for(int i = 0 ; i < (s.size())/2; i++){
            if(s[i] != s[j])
            return false;
            
            j--;
        }
        return true;
        }
    
    string firstPalindrome(vector<string>& words) {
    for(string s : words){
        if(isPalin(s) == true)
        return s;
    }    
    return "";
    }
};