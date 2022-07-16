class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t)
            return 0;
        
        vector<int>v(26,0);
        for(int i = 0; i < s.length(); i++){
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }
        int steps = 0;
        for(int i = 0; i < 26; i++)
            if(v[i] > 0)
                steps+=v[i];
        
        return steps;
        

    }
};