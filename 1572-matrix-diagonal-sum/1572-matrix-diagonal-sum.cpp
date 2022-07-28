class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        for(int i = 0; i < mat.size(); i++)
            ans+= mat[i][i]+mat[i][mat.size()-i-1];  // (i+j-1) in other form
        
        if( mat.size() % 2 != 0)
        ans-= mat[(int)mat.size()/2][(int)mat.size()/2];
        return ans;
        
        
        // O(n^2) Soln.
        //int ans = 0;
        // for(int i = 0; i < mat.size(); i++){
        //     for(int j = 0; j < mat.size(); j++){
        //         if(i == j || (i+j) == mat.size()-1)
        //             ans+=mat[i][j];
        //     }
        // }
        // return ans;
    }
};