class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx= 0;
        int temp;
        for(vector v : accounts){
        temp = 0;
        for(int i : v){
        temp += i;    
        }
            maxx = max(maxx, temp);
        }
        return maxx;
    }
};