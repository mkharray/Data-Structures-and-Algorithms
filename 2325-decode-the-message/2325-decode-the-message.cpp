class Solution {
public:
    string decodeMessage(string key, string message) {
        char curr = 'a';
        unordered_map<char,char>m;
        for(int i = 0; i < key.length(); i++){
         if(m.find(key[i]) == m.end() && key[i] != ' '){
             m.insert({key[i] , curr});
             curr++;
         }

        }
        string ans="";
        for(int i = 0; i < message.length(); i++){
            if(message[i] == ' ')
                ans = ans + ' ';
            else
            ans = ans + m[message[i]];
            
        }
        return ans;
    }
};