class Solution {
public:
    bool find(vector<vector<char>>&board, string word,int r, int c, int idx){
       if(idx == word.size()){
            return true;
        }
       if(r >= board.size() || r < 0 || c < 0 || c >= board[0].size() || board[r][c] != word[idx])
       return false;
       
       if(board[r][c] == '$')
       return false;

       char temp = board[r][c];
       board[r][c] = '$';
       bool left = find(board,word,r,c-1,idx+1);
       bool top = find(board,word,r-1,c,idx+1);
       bool right = find(board,word,r,c+1,idx+1);
       bool bottom = find(board,word,r+1,c,idx+1);

       board[r][c] = temp;
       if(left||right||top||bottom)
       return true;
       else
       return false;
     }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size();i++){
            for(int j = 0; j < board[0].size(); ++j){
                if(board[i][j] == word[0] && find(board,word,i,j,0))
                return true;
            }
        }
        return false;
    }
};