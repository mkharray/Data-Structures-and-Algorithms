class Solution {
public:
    int maxVowels(string s, int k) {
     int ans = 0;
     int i = 0;
     int j = 0;
     int vow = 0;
     string vowels = "aeiou";
     while(j < s.size()){
       
       if(vowels.find(s[j]) != string::npos)
       vow++;
       
       if((j-i+1) > k){
        if(vowels.find(s[i]) != string::npos)
        vow--;
        
        i++;
       }
       ans = max(ans, vow);
       j++;
     }
      return ans;
    }
};