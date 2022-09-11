class Solution {
public:
    bool isPalindrome(string s) {
        string og = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z')
                og+=s[i];
            else if(s[i] >= 'A' && s[i] <= 'Z')
                og+= (tolower(s[i]));
            else if(s[i] >='0' && s[i] <= '9')
                og+=s[i];
        }
        string newog = og;
        reverse(og.begin(), og.end());
        if(og == "")
            return true;
        if(og == newog)
            return true;
        else
            return false;
    }
};