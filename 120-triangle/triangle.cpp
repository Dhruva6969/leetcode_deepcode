class Solution {
public:

    int solve(int i, int j, int m, int n, vector<vector<int>> &dp, vector<vector<int>> &triangle){

        if(i == triangle.size()-1){
            return triangle[i][j];
        }
        if (dp[i][j] != INT_MAX) {
            return dp[i][j];
        }

        int diagnol= solve(i+1, j+1, m, n, dp, triangle);
        int down= solve(i+1, j, m, n, dp, triangle);
        
        return dp[i][j] = triangle[i][j] + min(diagnol, down);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        
        int m = triangle.size();
        vector<vector<int>> dp(m, vector<int>(m, INT_MAX));
        return solve(0, 0, m, m, dp, triangle);        
    }
};