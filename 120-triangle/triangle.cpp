class Solution {
public:

    int solve(int i, int j, int n, vector<vector<int>> &dp, vector<vector<bool>> &visited, vector<vector<int>> &triangle){
        if(i == n-1)    return triangle[i][j];

        if(visited [i][j])   return dp[i][j];
        int down = triangle[i][j] + solve(i+1, j , n, dp, visited, triangle);
        int diagnol = triangle[i][j] + solve(i+1, j+1, n, dp, visited, triangle);

        visited[i][j] = true;
        return dp[i][j] = min(down, diagnol);
    }

    int minimumTotal(vector<vector<int>>& triangle) { 
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        vector<vector<bool>> visited(n,vector<bool>(n+1, false));
        return solve(0, 0, n, dp, visited, triangle);        
    }
};