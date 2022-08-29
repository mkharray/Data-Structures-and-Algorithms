class Solution {
public:

int countPoints(string rings) {
    int n=rings.length();
    map<int,set<char>>mp;
    for(int i=1;i<n;i=i+2)
    {
        mp[rings[i]-'0'].insert(rings[i-1]);
    }
    int count=0;
    for(auto i:mp)
    {
        if(i.second.size()>2)
            count++;
    }
    return count;
    
}
};