class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n <= 1)
            return {{n}};
        
        vector<vector<int>> matrix(n,vector<int>(n));
        int element = 1;
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n-1;
        
        while(top <= bottom && right >= left){
        for(int i = left; i <= right; i++){
            matrix[top][i] = (element);
            element++;
        }
            top++;
            
        for(int i = top; i <= bottom; i++){     
            matrix[i][right] = (element);
            element++;
        }
        right--;
        
            
        if(left > right || top > bottom)
            break;
        
            
        for(int i = right; i >= left; i--){
          matrix[bottom][i] = (element);
        element++;
        }
        bottom--;
        
        for(int i = bottom; i >= top; i--){
             matrix[i][left] = (element);
        element++;
        }
        left++;
        }
        
        return matrix;
    }
};