//Dijsktra Algorithm
class Solution {
public:
   int disjkstra(vector<vector<pair<int,int>>>&graph,int threshold,int source)
    {
        queue<int>q;
        q.push(source);
        vector<int>distance(graph.size(),INT_MAX);
        distance[source]=0;
        while(!q.empty())
        {
            
            int node=q.front();
            q.pop();
           for(auto child:graph[node])
           {
               int nbr=child.first;
               int wt=child.second;
               if(distance[nbr]>distance[node]+wt)
               {
                   distance[nbr]=distance[node]+wt;
                   q.push(nbr);
               }
           }
       
        }
       int ans=0;
        for(int i=0;i<graph.size();i++)
        {
            if(distance[i]<=threshold)ans++;
        }
        return ans;
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto i:edges)
        {
            graph[i[0]].push_back({i[1],i[2]});
            graph[i[1]].push_back({i[0],i[2]});
        }
       
        vector<int>distance(n,0);
        for(int i=0;i<n;i++)
        {
            distance[i]=disjkstra(graph,distanceThreshold,i);
        }
        int ans=INT_MAX;
        int index=-1;
        for(int i=0;i<n;i++)
        {
            if(ans>=distance[i])
            {ans=distance[i];
             index=i;}
        }
        return index;
    }
};