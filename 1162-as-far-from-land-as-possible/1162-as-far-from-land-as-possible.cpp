class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int ans=0;
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
           pair<int,int>current=q.front();
            q.pop();
            pair<int,int>g[4]={{0,1},{0,-1},{1,0},{-1,0}};
            for(auto i:g)
            {
                int nx=i.first+current.first;
                int ny=i.second+current.second;
                if(nx>=0 and ny>=0 and nx<grid.size() and ny<grid[0].size() and grid[nx][ny]==0)
                {
                    q.push({nx,ny});
                    grid[nx][ny]=grid[current.first][current.second]+1;
                    ans=max(ans,grid[nx][ny]);
                    
                }
            }
        }
        if(ans<1) return -1;
        return ans-1;
    }
};