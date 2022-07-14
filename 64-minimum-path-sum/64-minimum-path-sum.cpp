
class Solution {
   
public:
    int f(vector<vector<int>>& grid, int row, int col)
    {
        if(row == 0 and col == 0) return grid[row][col]; //When we reached the first row, we could only move horizontally.
        if(row == 0) return grid[row][col] + f(grid, row, col - 1);  // When we reached the first column, we could only move vertically
        if(col == 0) return grid[row][col] + f(grid, row - 1, col);
        return grid[row][col] + min(f(grid, row - 1, col), f(grid, row, col - 1));

    }
    int minPathSum(vector<vector<int>>& grid) {
        // return f(grid, grid.size()- 1, grid[0].size()- 1); // TLE
        for(int i = 1; i < grid.size(); i++) grid[i][0] += grid[i - 1][0];
        for(int j = 1; j < grid[0].size(); j++)grid[0][j] += grid[0][j - 1]; 
        for(int i = 1; i < grid.size(); i++) {
            for(int j = 1; j < grid[0].size(); j++) grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
        return grid[grid.size() - 1][grid[0].size() - 1];
    }
};