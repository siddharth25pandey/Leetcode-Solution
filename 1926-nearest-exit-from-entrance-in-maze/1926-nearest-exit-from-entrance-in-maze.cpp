class Solution {
public:
    int nearestExit(vector<vector<char>>& mat, vector<int>& ent) {
        int m = mat.size();
        int n = mat[0].size();
        int srcx = ent[0];
        int srcy = ent[1];
        vector<vector<int>> dis( m , vector<int> (n  ,-1));
        
        queue<pair<int, int>>q;
        q.push({srcx, srcy});
        // mat[srcx][srcy] = '+';
        dis[srcx][srcy] = 0;
        vector<int>dx = {1, 0 , -1 , 0};
        vector<int>dy = {0 , 1, 0 , -1};
        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();
            // cout<<x<<" "<<y<<endl;
            
            for(int i = 0;i<4;i++){
                int newx = x + dx[i];
                int newy = y + dy[i];
                if(newx>=0 and newx <m and newy>=0 and newy<n and dis[newx][newy]==-1 and mat[newx][newy]!='+'){
                    dis[newx][newy] = dis[x][y]+1;
                    if(((newx==0) or (newx==m-1)) or ((newy==0) or (newy==n-1))){
                        return dis[newx][newy];
                    }
                    q.push({newx, newy});
                    // mat[newx][newy]='+';
                }
            }
            
            
        }
        
        return -1;
    
    }
};