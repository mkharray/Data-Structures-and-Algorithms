class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword = 0;
        for(auto &word : sentences){
            int count  = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ' ')
                count++;
        }
            maxword = max(maxword, count);
        }
        return maxword+1;
    }
};