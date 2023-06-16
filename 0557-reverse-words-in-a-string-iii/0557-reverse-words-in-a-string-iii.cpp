class Solution {
public:
    string revIt(string x){
        string ans = "";
        for(char ch : x)
            ans = ch+ans;
        return ans;
    }
    string reverseWords(string s) {
        s = s+' ';
        string ans = "";
        int x = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                ans = ans + revIt(s.substr(x,i-x))+' ';
                x = i+1;
                
                }
        }
        ans = ans.substr(0,ans.length()-1);
        return ans;
    }
};