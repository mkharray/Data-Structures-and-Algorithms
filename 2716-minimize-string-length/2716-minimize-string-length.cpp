class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>us;
        for(char ch : s){
            us.insert(ch);
        }
        return us.size();
    }
};