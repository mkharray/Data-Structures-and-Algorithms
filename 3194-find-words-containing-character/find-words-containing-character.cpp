class Solution {
public:
    bool contains(string s, char x){
        for(char c : s)
        if(c == x)
        return true;

        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i = 0; i < words.size(); i++){
            if(contains(words[i],x) == true )
            v.push_back(i);
        }
        return v;
    }
};