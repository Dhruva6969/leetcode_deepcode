class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(dp, n);
    }
        int solve(vector<int>& dp, int n){
            if(n<0) return 0;
            if(n==0) return 1;
            if (dp[n]!= -1 )
                return dp[n];

            int oneStep= solve(dp, n-1);
            int twoStep= solve(dp, n-2);

           return dp[n]= oneStep + twoStep;
        }
};