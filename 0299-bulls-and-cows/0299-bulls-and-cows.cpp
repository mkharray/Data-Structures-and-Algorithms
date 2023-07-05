class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        unordered_map<char,int>s;
        for(int i = 0; i < secret.size(); i++){
         if(guess[i] == secret[i] )
             bulls++;
        else{                       // Only NonBull Char go here
            if(s.find(secret[i]) == s.end() )
                s[secret[i]] = 1;
            else
                s[secret[i]]++;
        }
        }
        
        for(int i = 0; i < guess.size(); i++){
            if(guess[i] == secret[i]){
                
            }    
            else if(s.find(guess[i]) != s.end() && s[guess[i]] > 0){
                    cows++;
                    s[guess[i]]--;
                }
            }
        string ans = to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;
    }
};