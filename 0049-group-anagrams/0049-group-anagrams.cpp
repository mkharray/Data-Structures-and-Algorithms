class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>m;
        string s;
          vector<vector<string>> v;
        for(string st : strs){
            s = st;
            sort(s.begin(), s.end());
            if(m.find(s) == m.end() ){
                m[s] = {st};
            }
            else{
                m[s].push_back(st);
            }
        }
        
         for(auto it : m){
             v.push_back(it.second);
    }
        return v;
    }
};