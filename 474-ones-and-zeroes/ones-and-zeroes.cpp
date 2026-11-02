class Solution {
public:
    int dp[101][101][601];
    int solve(int m, int n, int i, vector<pair<int, int>>& count){


        if(i>= count.size() || (m==0 && n==0))    return 0;
        if(dp[m][n][i]!=-1) return dp[m][n][i];

        int take = 0;
        if(count[i].first<=m && count[i].second<=n){
            take = 1 + solve(m-count[i].first, n-count[i].second, i+1, count);
        }
        int skip = solve(m, n, i+1, count);
        return dp[m][n][i] = max(take, skip);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        int N= strs.size();
        vector<pair<int, int>> count(N);
        for(int i=0; i<N; i++){
            int countZeros=0;
            int countOnes=0;

            for(char& ch: strs[i]){
                if(ch == '0'){
                    countZeros++;
                }else{
                    countOnes++;
                }
            }
                count[i]= {countZeros, countOnes};
        }
        memset(dp, -1, sizeof(dp));
        return solve(m ,n, 0, count);
    }
};