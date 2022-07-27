class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans = image;
        
        for(int i = 0; i < image.size(); i++){
            int k = 0;
            for(int j =  image[0].size()-1; j >=0 ; j--){
                
                if(image[i][j] == 0)
                    ans[i][k] = 1;
                else
                    ans[i][k] = 0;
                
                k++;
                
            }
        }
        return ans;
    }
};