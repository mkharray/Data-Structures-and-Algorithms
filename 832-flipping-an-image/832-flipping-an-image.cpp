class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        
        for(int i = 0; i < image.size(); i++){
            int k = 0;
            for(int j =  image[0].size()-1; j > k ; j--){
                    swap(image[i][j] , image[i][k]);
                k++;
            }
            for(int l = 0; l < image[0].size(); l++)
                if(image[i][l] == 0)
                    image[i][l] = 1;
                else
                    image[i][l] = 0;
        }
        return image;
    }
};