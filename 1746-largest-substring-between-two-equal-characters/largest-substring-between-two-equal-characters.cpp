class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi = -1;
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            if (m.find(s[i]) == m.end()) {
                m[s[i]] = i;
            } else {
                maxi = max(maxi, i - m[s[i]] - 1);
            }
        }
        return maxi;
    }
};
