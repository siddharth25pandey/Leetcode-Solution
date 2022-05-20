class Solution {
     
public:
   
    int dfs(int i,int j,vector<vector<int>>& grid )
    {  
        int n=grid.size();
        int m=grid[0].size();
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==2 or !grid[i][j]) return 0;
           grid[i][j]=2;
         int ans=4;
           if(i<n-1 and grid[i+1][j] ) ans--; 
        if( i>0 and grid[i-1][j]) ans--;
        if(j<m-1 and grid[i][j+1]) ans--;
        if(j>0 and grid[i][j-1] ) ans--;
          return ans+ (dfs(i+1,j,grid)+dfs(i-1,j,grid)+dfs(i,j+1,grid)+dfs(i,j-1,grid));
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])return dfs(i,j,grid);
            }
        }
        return ans;
    }
};