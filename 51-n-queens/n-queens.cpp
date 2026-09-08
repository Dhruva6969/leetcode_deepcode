class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(board, n, 0, ans);

        return ans;
    }

        void solve( vector<string>& board, int n, int row, vector<vector<string>>& ans){
            if(row == n){   //all queen placed
                ans.push_back(board);
                return;
            }
            //recursive call
            for(int col= 0; col<n; col++){
                if(isValid(board, row, col, n)){
                    board[row][col]='Q';   // placing queen
                    solve(board, n, row+1, ans);   //moving next row
                    board[row][col]= '.';  //undo or backtrack
                }
            }
        }
        bool isValid(vector<string>& board, int row, int col, int n){
            //BS
            for(int i= row-1; i>=0; i--){   //upward
                if(board[i][col] == 'Q'){
                    return false;
                }
            }
            for(int i= row-1, j=col-1; i>=0 && j>=0; i--, j--){//upward left daignol
                if(board[i][j] == 'Q'){
                    return false;
                }
            }
            for(int i= row-1, j= col+1; i>=0 && j<n; i--, j++){//upward right diagnol
                if(board[i][j] == 'Q'){
                    return false;
                }
            }
            return true;
    }
};