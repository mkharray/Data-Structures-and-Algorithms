class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        
        for(int i = 0; i < s.size(); i++){
            if(m.find(s[i]) == m.end() )
                m[s[i]] = 1;
            else
                m[s[i]]++;
        }
        int check = m[s[0]];
        for(int i = 0; i < s.size() ;i++)
            if(m[s[i]] != check)
                return false;
        
        return true;
    }
};