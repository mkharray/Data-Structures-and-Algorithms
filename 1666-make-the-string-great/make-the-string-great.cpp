class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        stack<char>st;
        if(s.size() <= 1)
        return s;

        st.push(s[0]);
        for(int i = 1; i < s.size(); i++){
        if(st.empty() == true)
        st.push(s[i]);
        else if( (s[i] - 32 == st.top()) || ((s[i] +32) == st.top()) )
        {
            st.pop();
        } 
        else{
            st.push(s[i]);
        }
        }

        while(st.empty() == false){
            ans=st.top()+ans;
            st.pop();
        }

        return ans;
    }
};