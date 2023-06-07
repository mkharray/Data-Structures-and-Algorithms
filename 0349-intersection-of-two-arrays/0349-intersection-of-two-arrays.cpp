class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int> s(nums1.begin(), nums1.end());
            unordered_set<int> ss(nums2.begin(), nums2.end());
            vector<int>v;
            for(auto i : ss){
                if(s.find(i) != s.end())
                    v.push_back(i);
            }
        return v;
    }
};