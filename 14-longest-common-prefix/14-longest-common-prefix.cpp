class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     sort(strs.begin(),strs.end());
        string small = strs[0];
        int count = 0;
        string ans = "";
        string big = strs[strs.size()-1];
        
        for(int i = 0; i < small.length(); i++){
            if(small[i] == big[i])
            ans += big[i];
            else
            break;
            }

            return ans;
        
    }
};