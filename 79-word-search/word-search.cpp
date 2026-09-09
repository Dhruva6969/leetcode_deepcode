class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
       int m= board.size();
       int n= board[0].size();
       
       for(int row= 0; row<m; row++){
        for(int col=0; col<n; col++){
            if(board[row][col] == word[0]){
                if(solve(board, word, row, col, 0, m, n)){
                    return true;
                }
            }
        }
       }
    return false;
    }

    bool solve(vector<vector<char>>& board, string& word, int row, int col, int idx, int m, int n){
        if(idx == word.size()){
            return true;
        }
        if(row<0 || row>=m || col<0 || col>=n){
            return false;
        }
        if(board[row][col] != word[idx]){
            return false;
        }
        char temp = board[row][col];
        board[row][col] = '$';

        //upward
        if(solve(board, word, row-1, col, idx+1, m, n)){
            return true;
        }
        //downward
        if(solve(board, word, row+1, col, idx+1, m, n)){
            return true;
        }
        //right
        if(solve(board, word, row, col+1, idx+1, m, n)){
            return true;
        }
        //left
        if(solve(board, word, row, col-1, idx+1, m, n)){
            return true;
        }
        board[row][col] = temp;     //undo
        return false;
    }

};