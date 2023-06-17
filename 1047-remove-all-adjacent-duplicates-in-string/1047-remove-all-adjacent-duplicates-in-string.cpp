class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        ans += s[0];
        
        for(int i = 1; i < s.length(); i++){
            if(s[i] != ans.back())
                ans.push_back(s[i]);
            else
                ans.pop_back();
        }
        return ans;
    }
};