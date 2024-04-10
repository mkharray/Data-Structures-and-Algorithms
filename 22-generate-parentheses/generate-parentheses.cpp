class Solution {
public:
    vector<string>ans;

    void gen(int n, string s, int open, int close){
        if(s.size() == (n*2) ){
            ans.push_back(s);
            return;
        }
        if(open < n)
        gen(n,s+'(',open+1,close);
        if(close < open)
        gen(n,s+')',open,close+1);
    }
    vector<string> generateParenthesis(int n) {
        gen(n,"",0,0);
        return ans;
    }
};