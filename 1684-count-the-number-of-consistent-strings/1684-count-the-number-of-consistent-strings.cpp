class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        for(char ch : allowed){
            s.insert(ch);
        }
        int flag;
        string st;
        int c = 0;
        for(int j = 0; j < words.size(); j++ ){
            flag = 1;
            st = words[j];
            for(int i = 0; i < st.size();i++ ){
              if(s.find(st[i]) == s.end() )
              {
                  flag = -1;
                  break;
              }
            }
            if(flag == 1)
                c++;
        }
        return c;
    }
};