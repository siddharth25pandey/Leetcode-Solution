class Solution {
public:
    void dfs(vector<vector<char>>&v, int i, int j)
    {
        if(i< 0 or i>=v.size() or j<0 or j>=v[0].size() or v[i][j]=='0') return;
        v[i][j]='0';
        dfs(v,i+1,j);
         dfs(v,i-1,j);
        dfs(v,i,j+1);
         dfs(v,i,j-1);
       
        
      
    }
   
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    ans++;
                 }
            }
        }
                          return ans;
    }
};