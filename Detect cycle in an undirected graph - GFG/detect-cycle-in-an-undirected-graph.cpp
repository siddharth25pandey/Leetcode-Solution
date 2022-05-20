// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    
  public:
    // Function to detect cycle in an undirected graph.
    
    
   
    bool dfs_cycle(int index, int par, vector<int>graph[],bool visit[])
{
    visit[index]=true;
    bool ans=false;
    for(auto i:graph[index])
    {   
        if(visit[i] and i==par)continue;
        if(visit[i])return true;
        ans|=dfs_cycle(i,index,graph,visit);

    }
    return ans;
}

    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool visit[V+10];
       for(int i=0;i<V+10;i++)visit[i]=false;
    for(int i=0;i<V;i++)
    {
        if(visit[i])continue;
        if(dfs_cycle(i,0,adj,visit))
        {
            return true;
        }
    }
    return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends