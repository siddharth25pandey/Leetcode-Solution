class Solution {
public:
    void dfs(vector<vector<int>>&grid, int i, int j, int min=2)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or  grid[i][j]==0 or (1 < grid[i][j] and grid[i][j] < min))return ;
        grid[i][j]=min; // Assign the current minute to the grid
        dfs(grid,i+1,j,min+1);  // Recursive call to all 4 sides one by one and by incrementing tine by +1
         dfs(grid,i-1,j,min+1);
         dfs(grid,i,j+1,min+1);
         dfs(grid,i,j-1,min+1);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2) dfs(grid,i,j); // We have to proceed on those orananges which are rotten already and start a recursive call and the reason why we are sending 2 is because we cannot mark time as 0,1,2 Since they are being used in the question (empty cell, fresh orange,rotten orange) 
            }
        }
        int min=2;
        for(auto &i:grid)
        {
            for(auto &j:i)
            {
                if(j==1) return -1; // if by any means, any value is 1, that means we weren't able to rot that orange, Here min= Total time (minutes)
                min=max(min,j);  // otherwise, maximum time to rot.
            }
        }
        return min-2;
    }
};