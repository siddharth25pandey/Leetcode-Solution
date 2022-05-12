class Solution {
    
public:
   bool dfs(vector<vector<int>>&graph,vector<bool>&visit, int current, int parent=-1)
   {
       if(visit[current]) return true;   // reached already visited node -  cycle detected
       visit[current]=true;
       for(auto i:graph[current])
       {
           if(i!=parent and dfs(graph,visit,i,current)) return true;
       }
       return false; // no cycle found
      
        
   }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
       int n=edges.size();
       vector<vector<int>>graph(n+1);
       vector<bool>visit(n+1);
       for(auto i:edges)
       {    fill(visit.begin(),visit.end(), false); 
           graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
           if(dfs(graph,visit,i[0]))return i;
       }
       return {};
    }
};