class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = 1;
        vector<int>v;
        set<int>s (nums.begin(), nums.end());
            
        for(int i = 0; i < nums.size(); i++){
            if(s.find(n) == s.end() )
                v.push_back(n);
            n++;
        }
        return v;
    }
};