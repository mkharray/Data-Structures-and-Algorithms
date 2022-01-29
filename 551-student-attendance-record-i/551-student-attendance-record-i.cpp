class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        for(int i = 0; i < s.length(); i++){
if(s[i] == 'A')
    a++;
else if( (i <= s.length() - 3 ) && s[i] == 'L'){

    if(s[i+1] == 'L' && s[i+2] == 'L')
        return false;
}
            }
        return (a < 2);
    }
};