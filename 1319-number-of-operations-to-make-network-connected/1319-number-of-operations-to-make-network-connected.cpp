// Number of Connected Components-1= Answer
class Solution {
public:
    void dfs(int index,vector<vector<int>>& graph,vector<bool>&visit)
{
    visit[index]=true;
    for(auto i:graph[index])
    {
        if(visit[i])continue;
        dfs(i,graph,visit);
    }
    
}
    int makeConnected(int n, vector<vector<int>>& connections) {
         if(n>connections.size()+1)
            return -1;
        vector<vector<int>> graph(n);
        vector<bool>visit(n,false);
        for(auto i:connections)
        {
            graph[i[0]].push_back(i[1]);
             graph[i[1]].push_back(i[0]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!visit[i])
            {   ans++;
                dfs(i,graph,visit);
                
            }
        }
        return ans-1;
    }
};