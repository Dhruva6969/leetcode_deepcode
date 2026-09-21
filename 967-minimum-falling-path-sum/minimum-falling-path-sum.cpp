class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp = matrix;


        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                int upward= dp[i-1][j];

                int Ldiagnol= INT_MAX;
                if(j > 0)
                    Ldiagnol= dp[i-1][j-1];

                int Rdiagnol= INT_MAX;
                if(j<n-1)
                    Rdiagnol= dp[i-1][j+1];
                
                dp[i][j]+= min({upward,  Ldiagnol,  Rdiagnol});
            }
        }
        return *min_element(dp[m-1].begin(), dp[m-1].end());
    }
};