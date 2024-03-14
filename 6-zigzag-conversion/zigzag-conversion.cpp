class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        return s;

        vector<string>v (numRows, "");
        int rows = 0;
        int step = 1;
        for(int i = 0; i < s.size(); i++){
            v[rows].push_back(s[i]);
            
            if(rows == (numRows-1))
            step = -1;
            else if(rows == 0)
            step = 1;

            rows+=step;
        }
        string ans = "";
        for(string i : v)
        ans+=i;

        return ans;
    }
};