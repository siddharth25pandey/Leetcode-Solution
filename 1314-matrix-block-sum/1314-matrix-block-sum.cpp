class Solution {
   
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
       int m = mat.size(), n = mat[0].size();

		vector<vector<int>> ans=mat;
		vector<vector<int>> prefix_sum(105, vector<int>(105));

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int x = i + 1, y = j + 1;
				prefix_sum[x][y] = mat[i][j] + prefix_sum[x][y - 1] + prefix_sum[x - 1][y] - prefix_sum[x - 1][y - 1];
			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int r1, r2, c1, c2;
				r1 = ((i - k >= 0) ? i - k : 0);
				c1 = ((j - k >= 0) ? j - k : 0);
				r2 = ((i + k <= m - 1) ? i + k : m - 1);
				c2 = ((j + k <= n - 1) ? j + k : n - 1);

				ans[i][j] = prefix_sum[r2 + 1][c2 + 1] - prefix_sum[r1][c2 + 1] - prefix_sum[r2 + 1][c1] + prefix_sum[r1][c1];
			}
        }
        return ans;
    }
};