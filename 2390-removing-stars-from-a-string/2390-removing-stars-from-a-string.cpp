class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char ch : s){
            if(ch == '*')
                st.pop();
            else
                st.push(ch);
        }
        s="";
        while(st.empty() == false)
        {
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};