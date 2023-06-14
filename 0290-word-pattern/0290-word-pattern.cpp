class Solution {
public:
    int firstIndexOf(string s, char c){
        for(int i = 0 ; i < s.length(); i++){
            if(c == s[i])
                return i;
        }
        return -1;
    }
    int countSpaces(string s){
        int c = 0;
        for(char ch : s){
            if(ch == ' ')
                c++;
        }
        return c;
    }
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        unordered_set<string>ss;
        
        s+=' ';
        int spaces = countSpaces(s);
        if(pattern.length() != spaces)
            return false;
            
        string word;
        
        for(int i = 0; i < pattern.length(); i++){
                int x = firstIndexOf(s,' ');
                word = s.substr(0,x);
                
                if(m.find(pattern[i]) == m.end()){
                    if(ss.find(word) != ss.end() )
                        return false;
                    m[pattern[i]] = word;
                }
                else{
                    if(m[pattern[i]] != word)
                        return false;
                }
                s = s.substr(x+1, s.length());
                ss.insert(word);
        }
        
        return true;
    }
};