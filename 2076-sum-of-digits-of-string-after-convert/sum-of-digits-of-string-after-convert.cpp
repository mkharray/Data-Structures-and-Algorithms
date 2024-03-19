class Solution {
public:
    int transform(string n){
        int sum = 0;
        for(char c : n){
            sum+= c-'0';
        }
        return sum;
    }
    int getLucky(string s, int k) {
        int ans;
        string n = "";
        for(char c : s){
            n += to_string(c-'a'+1);
        }
        
        while(k--){
            ans = transform(n);
            n = to_string(ans);
        }
        return ans;
    }
};