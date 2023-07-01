class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int row = 0;
        int step = 1;
        vector<string>v (numRows,"");
        for(int i = 0; i < s.size(); i++){
            v[row].push_back(s[i]);
            if(row == 0)
                step = 1;
            else if(row == (numRows-1))
                step = -1;
            
            row = row+step;
            
        }
        string ans;
        for(int i = 0; i < numRows; i++)
            ans = ans+v[i];
        return ans;
        
    }
};