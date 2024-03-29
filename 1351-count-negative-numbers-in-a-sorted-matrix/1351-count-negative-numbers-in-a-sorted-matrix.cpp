class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans= 0;
        int i = 0;
        int j = 0;
        
        while(j < cols && i < rows){
            if(grid[i][j] < 0){
                ans = ans+ (cols-j);
                j = 0;
                i++;
                continue;
            }
            if(j == cols-1){
                j = 0;
                i++;
                continue;
            }
            j++;
        }
        return ans;
    }
};