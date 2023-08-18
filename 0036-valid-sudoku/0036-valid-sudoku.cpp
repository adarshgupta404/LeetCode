class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int cnt = 9;
        int row[cnt][cnt] = {false};
        int col[cnt][cnt] = {false};
        int sqr[cnt][cnt] = {false};
        for(int r = 0; r<cnt; r++){
            for(int c = 0; c<cnt; c++){
                if(board[r][c]=='.'){
                    continue;
                }
                int ind = board[r][c] - '0' - 1;
                int area = (r/3)*3 + c/3; 
                if(row[r][ind] || col[ind][c] || sqr[area][ind]){
                    return false;
                }
                row[r][ind] = true;
                col[ind][c] = true;
                sqr[area][ind] = true;
            }
        }
        return true;
    }
};