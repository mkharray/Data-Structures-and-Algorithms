class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans = {0,0};
        
        ans[0] = celsius+273.15;
        ans[1] = celsius*1.80 + 32.0;
        return ans;
    }
};