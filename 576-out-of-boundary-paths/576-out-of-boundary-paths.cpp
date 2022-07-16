class Solution {
public:
   const int mod = 1e9 + 7, moves[4][2] {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int findPaths(int m, int n, int maxMove, int r, int c) {
	auto outOfBounds = [&](int m, int n, int r, int c){return r < 0 || r >= m || c < 0 || c >= n;};
	uint dp[51][51][51]{};
	for(int M = 1; M <= maxMove; M++)            // iterate for all available moves
		for(int i = 0; i < m; i++) 
			for(int j = 0; j < n; j++) 
				for(int k = 0; k < 4; k++)       // for each cell, try all 4 possible moves
					if(outOfBounds(m, n, i + moves[k][0], j + moves[k][1])) dp[i][j][M]++;
					else dp[i][j][M] += dp[i + moves[k][0]][j + moves[k][1]][M-1] % mod;
	return dp[r][c][maxMove] % mod;
}
};