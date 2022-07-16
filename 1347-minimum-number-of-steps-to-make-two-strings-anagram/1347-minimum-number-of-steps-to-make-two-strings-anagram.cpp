class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t)
            return 0;
        
        vector<int>v(26,0);
        for(int i = 0; i < s.length(); i++){
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }
        int steps = 0;
        for(int i = 0; i < 26; i++)
            if(v[i] > 0)
                steps+=v[i];
        
        return steps;
        
//         int steps = 0;
//         unordered_map<char,int>m;
//         unordered_map<char,int>n;
        
//         for(int i = 0; i < s.length(); i++){
//         if(m.find(s[i]) == m.end() )
//             m.insert({s[i],1});
//         else
//             m[s[i]]++;
//         }
        
//         for(int i = 0; i < s.length(); i++){
//         if(n.find(t[i]) == n.end() )
//             n.insert({t[i],1});
//         else
//             n[t[i]]++;
//         }
//         char x;
//         for(int i = 0; i < s.length(); i++){
            
//             if (m[s[i]] > n[s[i]] && s[i] != x ) {
//                 steps += (m[s[i]] - n[s[i]]);
//             cout<<s[i]<<' ' << m[s[i]] <<  " " <<n[s[i]]<<endl;
//             }
//                x = s[i]; 
//         }
//         return steps;
    }
};