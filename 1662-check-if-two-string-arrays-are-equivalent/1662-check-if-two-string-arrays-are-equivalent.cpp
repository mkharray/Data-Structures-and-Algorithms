class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string worda = "";
        string wordb = "";
        for(int i = 0; i < word1.size();i++)
            worda+=word1[i];
        
        for(int i = 0; i < word2.size();i++)
            wordb+=word2[i];
        
        return worda==wordb;
    }
};