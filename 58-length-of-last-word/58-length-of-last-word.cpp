
class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastword = 0;
        for(int i = s.length()-1; i >=0; i--){
            if(s[i] != ' ')
                lastword++;
            else if(s[i] == ' ' && lastword > 0)
                break;
            }
        return lastword;
        }
    
};