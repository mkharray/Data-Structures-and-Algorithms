class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          vector<vector<string>> ans;
          unordered_map<string,vector<string>>m;
    
        for(int i = 0; i < strs.size(); i++){
        string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(m.find(temp) == m.end())
                m.insert({temp,{strs[i]}});
            else
                m[temp].push_back(strs[i]);
        }
        
        
         for(auto it : m){
             ans.push_back(it.second);
    }
    return ans;
    }
};