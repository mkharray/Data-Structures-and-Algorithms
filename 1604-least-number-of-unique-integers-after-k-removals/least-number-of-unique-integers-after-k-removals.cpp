class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i : arr){
            if(m.find(i) == m.end())
            m[i] = 1;
            else
            m[i]++;
        }

        for(auto i : m){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        int j;

        for(int i = 0; i < v.size(); i++){
            if(v[i] < k){
                k -= v[i];
                v[i] = 0;
            }
            else{
                v[i]-=k;
                k = 0;
                j = i;
                break;
            }
        }
        int c = 0;
        for(int i = j; i< v.size(); i++){
            if(v[i] > 0)
            c++;
        }
        return c;
    }
};