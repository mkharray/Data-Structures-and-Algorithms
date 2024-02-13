class Solution {
public:
    bool isAlphabet(char c){
       if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122 ))
        return true;

        return false;
    }
    string reverseOnlyLetters(string s) {
    int j = s.size()-1;
    string ans = "";
    for(int i = 0; i < s.size();i++){
        if(isAlphabet(s[i]) == true){
                while(isAlphabet(s[j]) == false)
                j--;

                ans += s[j];
                j--;
        }
        else
        ans +=s[i];
    }
    return ans;
    }
};