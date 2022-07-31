class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       //Staicase Search
        //O(m+n)
        int x;
        int index = matrix[0].size()-1;
        int i = 0;
            
            while(index >=0 && i < matrix.size()){
                 x = matrix[i][index];
                if(target== x)
                    return true;
                
                else if(target < x)
                    index--;
                else 
                    i++;
                }

    return false;    
    }
};