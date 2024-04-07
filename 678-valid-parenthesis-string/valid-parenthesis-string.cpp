class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        vector<int>v;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(')
            st.push(i);

            else if(s[i] == ')' && st.empty() == true){
                if(v.size() == 0)
                return false;
                else
                v.pop_back();
            }

            else if(s[i] == '*'){
                v.push_back(i);
            }

            else
            st.pop();
        }
        int j = -1;
        if(v.size() > 0)
        j = v.size()-1;

        
        while(st.empty() == false){
        if(j < 0)
        return false;
        
        if(st.top() > v[j]){
        return false;
        }
        else{
            st.pop();
            j--;
        }    
        }
        return true;
    }
};