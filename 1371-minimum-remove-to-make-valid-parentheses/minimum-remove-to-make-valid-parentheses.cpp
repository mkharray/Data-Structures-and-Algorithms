class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        string ans = "";

        for(int i = 0; i < s.size();i++){
            if(s[i] == '(')
            st.push(i);
            else if(s[i] == ')'){
                if(st.empty() == true)
                s[i] = '#';
                else
                st.pop();
            }
        }

        while(st.empty() != true){
            s[st.top()] = '#';
            st.pop();
        }

        for(char c : s){
            if(c != '#')
            ans+=c;
        }
        return ans;
    }
};