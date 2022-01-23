class Solution {
public:
    string reversePrefix(string word, char ch) {
        int flag = 0;
        string ans = "";
        for(int i= 0 ; i < word.length();i++){
            if(flag == 0 ){
            if(ch == word[i]){
                flag = -99;
                ans = ch+ans;
                }
            else{
                ans = word[i] + ans;
                    }
            }
            
            else{
                ans = ans+word[i];
                }
        }
        
        if(flag == 0)
            return word;
        else
            return ans;
    }
};