class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>graph[n+1]; // Dijkstra algorithm
        for(auto &i:times)
        {
            graph[i[0]].push_back({i[1],i[2]});
        }
        vector<int>dist(n+1,1e9);
        dist[k]=0;
        vector<bool>visit(n+1,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pq.push({0,k});
        pair<int,int>temp;
        while(!pq.empty())
        {
            temp=pq.top();
            pq.pop();
            int u=temp.second;
            visit[u]=true;
            
            for(int i=0;i<graph[u].size();i++)
            {
                int v=graph[u][i].first;
                int w=graph[u][i].second;
                if(!visit[v] and dist[v]>dist[u]+w)         
                {
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
    
    int ans = 0;
        for(int i=1;i<dist.size();i++){
            ans = max(ans, dist[i]);
        }
    return (ans==1e9)?-1:ans;
        
    }
};