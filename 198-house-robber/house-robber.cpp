class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n+1, -1);
        return solve(nums, dp, 0);
    }
    int solve(vector<int>& nums, vector<int>& dp, int i){
        if(i >= nums.size()){
            return 0;
        }
        if(dp[i]!= -1){
            return dp[i];
        }
        int steal = nums[i] + solve(nums, dp, i+2);
        int Notsteal = solve(nums, dp, i+1);

        return dp[i]= max(steal, Notsteal);
    }
};