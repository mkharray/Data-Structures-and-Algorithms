class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int dif = arr[1] - arr[0];
        vector<vector<int>>v;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] - arr[i-1] <= dif){
                dif = arr[i] - arr[i-1] ;
            }
        }
            for(int i = 1; i < arr.size();i++){
                if(arr[i] - arr[i-1] == dif)
                    v.push_back({arr[i-1] ,arr[i]});
            }
        return v;
    }
};