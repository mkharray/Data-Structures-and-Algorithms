class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxlen = 0;
        unordered_map<char,int>m;
        while(s.size() > r){
            if(m.find(s[r]) == m.end()){
            m[s[r]] = r;
            }
            else if (m[s[r]] >= l && m.find(s[r]) != m.end()){
            l = m[s[r]]+1;
            }
            m[s[r]] = r;
            maxlen = max(maxlen, (r-l+1));
            r++;
        }
        return maxlen;
    }
};