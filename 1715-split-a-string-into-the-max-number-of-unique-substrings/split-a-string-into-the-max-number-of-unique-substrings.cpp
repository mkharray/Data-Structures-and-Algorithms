class Solution {
public:
    unordered_set<string>st;
    int ans = 0;
    void help(string s, int idx){
        if(idx == s.size()){
        ans = max(ans, (int)st.size());
        return;
        }
        string x = "";
        for(int i = idx; i < s.size(); i++){
            x += s[i];

            if(st.find(x) == st.end() ){
            st.insert(x);
            cout<<x<<st.size()<<endl;
            help(s,i+1);
            st.erase(x);
}
        }

    }

    int maxUniqueSplit(string s) {
        help(s, 0);
        return ans;
    }
};