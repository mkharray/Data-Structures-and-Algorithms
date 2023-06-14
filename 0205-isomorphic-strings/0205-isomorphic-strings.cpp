class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_set<char>ss;
        for(int i = 0; i < s.length();i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = t[i];
                if(ss.find(t[i]) != ss.end())
                    return false;
                
            }
            else{
                if(m[s[i]] != t[i] )
                    return false;
            }
            ss.insert(t[i]);
        }
            return true;
    }
};