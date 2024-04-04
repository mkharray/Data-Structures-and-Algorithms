class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxDep = 0;

        for(char c : s){
            if(c == '('){
                st.push('C');
                if(maxDep < st.size())
                maxDep = st.size();
            }
            else if(c == ')')
            st.pop();
        }
        return maxDep;
    }
};