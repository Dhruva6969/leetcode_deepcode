class Solution {
public:
        int m, n;
        int dp[1001][1001];

    int solve(int i, int j, string &s1, string &s2){
        
        if(i>=m && j>=n)    return 0;
        if(i>=m){
            return s2[j] + solve(i, j+1, s1, s2);
        }
        if(j>=n){
            return s1[i] + solve(i+1, j, s1, s2);
        }
        if(dp[i][j]!= -1)   return dp[i][j];

        if(s1[i] == s2[j]){
            return dp[i][j] = solve(i+1, j+1, s1, s2);
        }

        int delete_s1 = s1[i] + solve(i+1, j, s1, s2);
        int delete_s2 = s2[j] + solve(i, j+1, s1, s2);

        return dp[i][j] = min(delete_s1, delete_s2);
    }

    int minimumDeleteSum(string s1, string s2) {
        m= s1.size();
        n= s2.size();

        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s1, s2);
    }
};