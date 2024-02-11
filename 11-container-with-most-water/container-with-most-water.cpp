class Solution {
public:
    int maxArea(vector<int>& height) {
        int p = 0;
        int q = height.size()-1;
        int sum =0;
        while(p < q){
            if( (q-p)*(min(height[p],height[q])) > sum )
            sum = (q-p)*(min(height[p],height[q])) ;

            if(height[p]<height[q] )
            p++;
            else
            q--;
        }
        return sum;
    }
};