class Solution {
public:

    bool solve(vector<int>& nums, int target, int i, vector<vector<int>>& dp){
        //bs
        if(target==0)
            return true;
        if(i==0)
            return false;

        if(dp[i][target] != -1){
            return dp[i][target];
        }

        // target= totalSum/2;

        bool notPick= solve(nums, target, i-1, dp);
        bool pick= false;
        if(nums[i-1]<= target){
        pick= solve(nums, target-nums[i-1], i-1, dp);
        }

        
        return dp[i][target]= pick || notPick;
    }

    bool canPartition(vector<int>& nums) {
        int n= nums.size();

        int totalSum=0;
        for(int x:nums){
            totalSum+=x;
        }
        int target= totalSum/2;
        if(totalSum%2!= 0){
            return false;
        }

        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        return solve(nums, target, n, dp);
    }
};