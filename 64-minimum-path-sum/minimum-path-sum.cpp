class Solution {
public:

    int solve(int i, int j, int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp){
        //bs
        if(i == m-1 && j == n-1)    return grid[i][j];
        //invalid
        if(i>=m || j>=n)  return INT_MAX;
        //completwd
        if(dp[i][j]!= -1)   return dp[i][j];
    

        int right = solve(i, j+1, m, n, grid, dp);
        int down = solve(i+1, j, m, n, grid, dp);
        return dp[i][j] = grid[i][j] + min(right, down);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(0, 0, m, n, grid, dp);
    }
};