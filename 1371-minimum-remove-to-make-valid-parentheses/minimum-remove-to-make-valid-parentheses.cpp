class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty() && s[st.top()] == '(') {
                    st.pop();
                } else {
                    s[i] = '*'; // Mark invalid closing parentheses
                }
            }
        }
        
        // Mark invalid opening parentheses
        while (!st.empty()) {
            s[st.top()] = '*';
            st.pop();
        }
        
        // Remove marked characters
        string ans;
        for (char c : s) {
            if (c != '*') {
                ans.push_back(c);
            }
        }
        
        return ans;
    }
};
