class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>row;
        unordered_set<int>col;
        for(int i = 0; i < matrix.size(); i++){
            for(int j= 0; j< matrix[0].size();j++){
                if(matrix[i][j] == 0){
                    col.insert(j);
                    row.insert(i);
                }
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            for(int j= 0; j< matrix[0].size(); j++){
                if(row.find(i) != row.end() || col.find(j) != col.end())
                    matrix[i][j] = 0;
            }
        }
        
        
    }
};