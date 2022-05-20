class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
     int m = grid.size(), n = grid[0].size();
	vector<vector<int> > dp (m + 1, vector<int>(n + 1));
    dp[0][1] = 1;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)            
			// dp[i][j] = sum of unique paths for top and left cell (cells from which we reach current one)
            dp[i][j] = !grid[i - 1][j - 1] ? dp[i - 1][j] + dp[i][j - 1] : 0;
    return dp[m][n];   
    }
};