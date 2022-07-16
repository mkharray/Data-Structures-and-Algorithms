class Solution {
public:
    int minimumSum(int num) {
        
        int sum = 0;
        int temp = num;
        vector<int>v;
        while(temp > 0){
            v.push_back(temp%10);
            temp/=10;
        }
        sort(v.begin(), v.end());
        
        pair<int,int>p = {0,0};
        for(int i = 0; i < v.size(); i++){
        if(i == 0 || i ==3)
            p.first = (p.first*10)+v[i];
        else
            p.second = (p.second*10)+v[i];
        }
        return (p.first+p.second);
    }
};