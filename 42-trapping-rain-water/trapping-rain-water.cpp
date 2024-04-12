class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>l_max;
        vector<int>r_max = height;
        int max = height[0];
        for(int i = 0; i < height.size();i++){
            if(max < height[i])
            max = height[i];

            l_max.push_back(max);
        }
        max = height[l_max.size()-1];

        for(int i = height.size()-1; i > -1 ; i--){
            if(max < height[i])
            max = height[i];

            r_max[i] = max;
        }
        int ans = 0;
        for(int i = 0; i < height.size();i++){
            ans+= (min(r_max[i], l_max[i]) - height[i]);
        }
        return ans;
    }
};