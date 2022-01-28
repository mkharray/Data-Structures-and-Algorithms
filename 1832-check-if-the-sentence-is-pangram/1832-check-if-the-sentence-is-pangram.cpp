class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26] = {0};
        int count = 26;
        for(int i = 0; i < sentence.length();i++){
            if(a[(int)sentence[i]-'a'] == 0){
                count--;
                a[(int)sentence[i]-'a']++;
            }
        }
        return(count == 0);
    }
};