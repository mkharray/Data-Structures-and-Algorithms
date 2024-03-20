class Solution {
public:
    void floodfill(vector<vector<int>>& image, int sr, int sc, int ogc, int newc){
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) //To keep inbounds
        return;
        if(image[sr][sc] != ogc || image[sr][sc] == newc)
        return;

        image[sr][sc] = newc;

        floodfill(image, sr+1, sc, ogc, newc);
        floodfill(image, sr, sc+1, ogc, newc);
        floodfill(image, sr-1, sc, ogc, newc);
        floodfill(image, sr, sc-1, ogc, newc);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        floodfill(image, sr,sc,image[sr][sc], color);
        return image;
    }
};