class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dis( m , vector<int> (n  ,-1));
        
        queue<pair<int, int>>q;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dis[i][j] = 0;
                }
            }
        }
        
        
        vector<int>dx = {1, 0 , -1 , 0};
        vector<int>dy = {0 , 1, 0 , -1};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            
            for(int i = 0;i<4;i++){
                int newx = x + dx[i];
                int newy = y + dy[i];
                if(newx>=0 and newx <m and newy>=0 and newy<n and dis[newx][newy]==-1){
                    dis[newx][newy] = dis[x][y]+1;
                    q.push({newx, newy});
                }
            }
            
            
        }
        
        
        return dis;
    }
};