class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr = 0;
        int sc = 0;
        int er = matrix.size()-1;
        int ec = matrix[0].size()-1;
        vector<int>ans;
        int c = 0;
        int count = (er+1)*(ec+1);
        while((er >= sr && sc <= ec)){
        
            for(int i = sc; i <= ec; i++){
                ans.push_back(matrix[sr][i]);
                c++;
            }
            sr++;
            if(c == count)
                return ans;
            
            for(int i = sr; i <= er;i++){
                ans.push_back(matrix[i][ec]);
                c++;
            }
            ec--;
            if(c == count)
                return ans;
            
            for(int i = ec; i >= sc; i--){
                ans.push_back(matrix[er][i]);
                c++;
                }
            er--;
            if(c == count)
                return ans;
            
            for(int i = er; i >= sr; i-- ){
                ans.push_back(matrix[i][sc]);
                c++;
            }
            sc++;
            if(c == count)
                return ans;
        }
        return ans;
    }
};