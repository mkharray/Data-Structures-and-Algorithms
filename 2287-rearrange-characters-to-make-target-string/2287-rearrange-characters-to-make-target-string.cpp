class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>v(26,0);
         for(int i = 0; i < s.length(); i++)
            v[s[i] - 'a']++;
         
        target = target+'.';
        int count = 0;
        while(true){
            for(int i = 0; i <target.length(); i++ ){
                if(target[i] == '.')
                    count++;
                else if(v[target[i]-'a'] > 0)
                v[target[i]-'a']--;
                else
                    goto output;
            }
        }
        output:
        return count;
    }
};