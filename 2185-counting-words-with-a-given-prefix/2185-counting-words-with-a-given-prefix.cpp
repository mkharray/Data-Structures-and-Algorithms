class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int preflength = pref.length();
        int ans = 0;
        for(auto i : words){
            if(i.length() >= pref.length())
                if( (i.substr(0,preflength)) == pref)
                    ans++;     
        }
        return ans;
    }
};