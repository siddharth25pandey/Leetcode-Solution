// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
      bool detect(vector<int> adj[],vector<int> &v,vector<int> &d,int i){
       v[i]=1;
       for(auto it: adj[i]){
           if(d[it]==-1){
              continue;
           }
           if(!v[it]){
               if(detect(adj,v,d,it)) return true;
               else {v[it]=0; d[it]=-1;}
           }
           else return true;
       }
       v[i]=0;
       return false;
   }
    bool isCyclic(int n, vector<int> adj[]) {
         vector<int> d(n,0);
       vector<int> v(n+1,0);        
       for(int i=0;i<n;i++){
           if(!v[i]){
               if(detect(adj,v,d,i))return true;
               else d[i]=-1;
              
           }
       }
       return false;}
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends