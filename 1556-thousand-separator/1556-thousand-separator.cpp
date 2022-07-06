class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        
        if(s.length() <= 3) 
            return s;
        
        int count = 0;
        string ans = "";
        for(int i = s.length()-1; i >=0; i--){
           
            if(count == 3){
                count = 0;
                ans = '.'+ans;
            }   
             ans = s[i]+ans;
            count++;
        }
        return ans;
    }
};