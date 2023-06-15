class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v ('z'+1, {0,0});
        
        for(char ch : s){
            v[ch] = {v[ch].first+1,ch};
        }
        sort(v.begin(), v.end());
        string ans = "";
        
        for(auto it : v ){
            ans = string(it.first,it.second) + ans;
        }
        return ans;
    }
};