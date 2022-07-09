class Solution {
public:
    int countAsterisks(string s) {
        int flag = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '|')
                flag++;
            
            if(flag % 2 == 0 && s[i] == '*')
                count++;
        }
        return count;
    }
};