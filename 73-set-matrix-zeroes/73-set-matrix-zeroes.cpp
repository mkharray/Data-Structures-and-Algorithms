class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<int>flagrow(200,1);
        vector<int>flagcol(200,1);
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                
                if(matrix[i][j] == 0){
                    flagrow[i] = 0;
                    flagcol[j] = 0;
                }
            }
        }
        
        
          for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                
              if(flagcol[j] == 0 || flagrow[i] == 0)
                  matrix[i][j] = 0;
            }
        }
    }
};