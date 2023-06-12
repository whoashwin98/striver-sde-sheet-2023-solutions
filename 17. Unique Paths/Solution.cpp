#include <bits/stdc++.h>

int solve(int m, int n, int r, int c, vector<vector<int>> &dp)
{
    if (r < 0 || r > m || c < 0 || c > n)
        return 0;
    if (r == 0 && c == 0)
        return 1;
    if (dp[r][c] != -1)
        return dp[r][c];

    int down = solve(m, n, r - 1, c, dp);
    int left = solve(m, n, r, c - 1, dp);

    return dp[r][c] = down + left;
}

int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return solve(m, n, m - 1, n - 1, dp);
}