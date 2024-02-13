class Solution {
public:
    string reverse(string s){
        string ans = "";

        for(char c : s){
            ans = c+ans;
        }
        return ans;
    }
    string finalString(string s) {
        string ans = "";

        for(char c:s){
            if(c == 'i')
            ans = reverse(ans);
            else
            ans +=c;
        }
        return ans;
    }
};