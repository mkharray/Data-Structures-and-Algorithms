class Solution {
public:
    int dfs(vector<vector<int>>& grid, vector<vector<int>>& visited, int i, int j) {
        int cnt = 0;

        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) {
            return 1; 
        }

        if (visited[i][j] == 1) {
            return 0; 
                    }

        visited[i][j] = 1;

        cnt += dfs(grid, visited, i - 1, j);
        cnt += dfs(grid, visited, i + 1, j);
        cnt += dfs(grid, visited, i, j - 1);
        cnt += dfs(grid, visited, i, j + 1);

        return cnt;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int per = 0;
        vector<vector<int>> visited(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1 && visited[i][j] == 0) {
                    per += dfs(grid, visited, i, j);
                }
            }
        }

        return per;
    }
};