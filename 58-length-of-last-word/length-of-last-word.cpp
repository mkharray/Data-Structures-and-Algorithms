class Solution {
public:
    int lengthOfLastWord(string s) {
        int word_len = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != ' ')
            word_len++;

            if(word_len > 0 && s[i] == ' ')
            return word_len;
        }
        return word_len;
    }
};