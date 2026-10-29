class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        if (n == 0) return 0;
       vector<int> dp(n+1, 1);
        int ans =1;
        for (int i = 0; i < n; i++) {
            for (int prev = 0; prev < i; prev++){


                if (nums[prev] < nums[i]) {
                    dp[i] = max(dp[i], dp[prev] + 1);
            }
        }

        ans = max(ans, dp[i]);   
        }
    return ans;
    }    
};
    // int solve(vector<int> &nums, int i, int prev, vector<vector<int>> &dp){
    //     int n= nums.size();

    //     if(i>=n)    return 0;
    //     if(dp[i][prev+1]!= -1) return dp[i][prev+1];

    //     int skip = solve(nums, i+1, prev, dp);
    //     int take = 0;
    //     if(prev == -1 || nums[prev]<nums[i]){
    //         take = 1 + solve(nums, i+1, i, dp);
    //     }
    //     return dp[i][prev+1] = max(take, skip);
    // }
//     int lengthOfLIS(vector<int>& nums) {
//         int n= nums.size();

//        vector<vector<int>> dp(n, vector<int>(n+1, -1));
//        return solve(nums, 0, -1, dp);
//     }
// };

