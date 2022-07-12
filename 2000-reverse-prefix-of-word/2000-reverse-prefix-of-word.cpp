class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = word;
        for(int i  = 0; i < word.length(); i++){
            if(word[i] == ch)
            {
                ans =word.substr(0,i+1);
               reverse(ans.begin(), ans.end());
                cout<<ans<<" ";
                ans = ans + word.substr(i+1);
                
                goto end;
            }
        }
        end:
        return ans;
    }
};