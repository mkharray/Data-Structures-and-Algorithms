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
                cout<<grid[i][j]<<" "<<ans<<" "<<j<<endl;
                j = -1;
                i++;
                
            }
            if(j == cols-1){
                j = -1;
                i++;
            }
            j++;
        }
        return ans;
    }
};