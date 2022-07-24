class Solution {
public:
    bool iscycle(vector<int> adj[],vector<int> &vis,int id){
        if(vis[id]==1)return true;  
        if(!vis[id]){
            vis[id]=1;
            for(auto &i : adj[id]){
                if(iscycle(adj,vis,i)) return true;
            }
        }
        vis[id] = 2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n],vis(n,0);
        for(auto &i : pre)adj[i[1]].push_back(i[0]); // Undirected
        for(int i=0;i<n;i++){
            if(iscycle(adj,vis,i))return false;     
        }
        return true;
    }
};