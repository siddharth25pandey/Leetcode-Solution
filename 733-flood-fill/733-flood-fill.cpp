class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& mat, int sr, int sc, int upd) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int, int>>q;
        q.push({sr, sc});
        int org = mat[sr][sc];
        vector<vector<int>>vis(m , vector<int> (n, 0));
        mat[sr][sc] = upd;
        vis[sr][sc] = 1;
        vector<int>dx = {1, 0 , -1 , 0};
        vector<int>dy = {0 , 1, 0 , -1};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            
            for(int i = 0;i<4;i++){
                int newx = x + dx[i];
                int newy = y + dy[i];
                if(newx>=0 and newx <m and newy>=0 and newy<n and mat[newx][newy]==org and vis[newx][newy]==0){
                    mat[newx][newy] = upd;
                    q.push({newx, newy});
                    vis[newx][newy] = 1;
                }
            }
            
            
        }
        
        
        return mat;
    
    }
};