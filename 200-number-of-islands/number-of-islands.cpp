class Solution {
public:
    void dfs(int sr, int sc, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
        if (sr < 0 || sr >= grid.size() || sc < 0 || sc >= grid[0].size()
            || grid[sr][sc] == '0' || visited[sr][sc] == true) {
            return;
        }

        visited[sr][sc] = true;
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (const auto& dir : directions) {
            int newr = sr + dir[0];
            int newc = sc + dir[1];
            if (newr >= 0 && newr < grid.size() && newc >= 0 && newc < grid[0].size()) {
                dfs(newr, newc, grid, visited);
        }
      }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>visited(n, vector<bool>(m,false));

        int c = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(visited[i][j] == false && grid[i][j] == '1')
                {
                    dfs(i, j , grid, visited);
                    c++;
                }
            }
        }
    return c;
    }
};