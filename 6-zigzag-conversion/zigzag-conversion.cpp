class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
        return s;

        vector<string>v (numRows, "");
        int rows = 0;
        bool flag = false;
        for(int i = 0; i < s.size(); i++){
            v[rows].push_back(s[i]);
            
            if(rows == (numRows-1))
            flag = true;
            else if(rows == 0)
            flag = false;

            if(flag)
            rows--;
            else
            rows++;
        }
        string ans = "";
        for(string i : v)
        ans+=i;

        return ans;
    }
};