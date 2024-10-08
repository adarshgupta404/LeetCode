class Solution {
public:
    int dest(vector<vector<int>> &dp, int m, int n, int i, int j) {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j])
            return dp[i][j];
        return dp[i][j] = dest(dp, m, n, i + 1, j) + dest(dp, m, n, i, j + 1);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n));
        return dest(dp, m, n, 0, 0);
    }
};