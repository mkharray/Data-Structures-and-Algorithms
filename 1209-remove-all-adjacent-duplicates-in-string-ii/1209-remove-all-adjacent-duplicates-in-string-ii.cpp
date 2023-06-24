class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        int count = 0;
        string ans = "";
        
        if(s.size() < k)
            return s;
        for(int i = 0; i < s.size();i++){
            if(st.empty() == true || st.top().first != s[i]){
                st.push({s[i],1});
            }
            else if(st.top().first == s[i]){
                st.top().second += 1;  
            }

            if(st.top().second == k){
               // cout<<st.top().first;
                st.pop();  
            }
    }
            
        while(st.empty() == false){
            while(st.top().second > 0){
            ans += st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};