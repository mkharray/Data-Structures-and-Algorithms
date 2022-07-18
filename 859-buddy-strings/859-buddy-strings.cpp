class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(goal.length() != s.length())
            return false;
        
        vector<int>v(26,0);
        int flag = -1;
        int repeatLetter = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != goal[i] && flag != -1){
                swap(s[i],s[flag]);
                if(goal == s)
                    return true;
                else
                    return false;
            }
            else if(s[i] != goal[i])
                flag = i;
            
            v[s[i] - 'a']++;
            if(v[s[i] - 'a'] == 2)
                repeatLetter = 1;
        }

        if(repeatLetter == 1 && s == goal)
            return true;
        else
            return false;
        
    }
};