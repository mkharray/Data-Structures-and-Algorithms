class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        // first -> calculate transpose of the matrix
        // then - > swap the columns(reverse the rows)


        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reversing
        int siz = n-1;
        for(int i = 0; i < n; i++){
            siz = n-1;
            for(int j = 0; j < n/2; j++){
                swap(matrix[i][j], matrix[i][siz]);
                siz--;
            }
        }

    }
};