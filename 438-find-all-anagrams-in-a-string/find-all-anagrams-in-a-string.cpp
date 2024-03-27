class Solution {
public:
    bool checkzero(vector<int>v){
        for(int i : v)
        if(i != 0)
        return false;

        return true;
    }
    vector<int> findAnagrams(string s, string p) {
     vector<int>v(26,0);
     for(char ch : p){
        v[ch-'a']++;
     }   
     int i = 0;
     int j = 0;
     vector<int>ans;
     
     while(j < s.size()){
        v[s[j] - 'a']--;

        if( (j-i+1) == p.size())
        if(checkzero(v) == true){
        ans.push_back(i);
        }
        if( (j-i+1) >= p.size()){
            v[s[i] - 'a']++;
            i++;
        }
        j++;
     }
     return ans;
    }
};