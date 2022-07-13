class Solution {
public:
    void dfs(vector<vector<int>>&grid, int i, int j, int min=2)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or  grid[i][j]==0 or (1 < grid[i][j] and grid[i][j] < min))return ;
        grid[i][j]=min;
        dfs(grid,i+1,j,min+1);
         dfs(grid,i-1,j,min+1);
         dfs(grid,i,j+1,min+1);
         dfs(grid,i,j-1,min+1);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2) dfs(grid,i,j);

            }
        }
        int min=2;
        for(auto &i:grid)
        {
            for(auto &j:i)
            {
                if(j==1) return -1;
                min=max(min,j);
            }
        }
        return min-2;
    }
};