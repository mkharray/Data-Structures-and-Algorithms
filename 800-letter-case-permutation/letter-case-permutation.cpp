class Solution {
public:
    vector<string>ans;
    void solve(string s, int idx, string s2){
        if(idx == s.size()){
        ans.push_back(s2);
        return;
        }

            char c = s[idx];
            if(isalpha(c)){
                if(islower(c))
                s2[idx] = c-32;
                else
                s2[idx] = c+32;

                solve(s, idx+1, s2);
                s2[idx] = c;
                solve(s, idx+1, s2);
            }
            else
            solve(s, idx+1, s2);
        
    }
    vector<string> letterCasePermutation(string s) {
        solve(s, 0, s);
        return ans;
    }
};