class Solution {
public:
    int find(int i, vector<int>&v)
    {
        if(v[i]!=i)v[i]=find(v[i],v);
        return v[i];
        
    }
    void merge(int x, int y, vector<int>&v){
        v[find(x,v)]=find(y,v);
    }
   int minCostConnectPoints(vector<vector<int>>& points) {
        
        /*int n = points.size();
        
        set<pair<int, int>> s;
        vector<vector<pair<int, int>>> graph(points.size());
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                graph[i].push_back({j, getDistance(points[i], points[j])});
                graph[j].push_back({i, getDistance(points[i], points[j])});
                
            }
        }
        
        vector<int> dist(n, INT_MAX);
        vector<bool> visited(n, false);
        
        s.insert({0, 0});
        dist[0] = 0;
        int ans = 0;
        while(!s.empty()) {
            
            pair<int, int> p = *s.begin();
            s.erase(p);
            if(visited[p.second]) {
                continue;
            }
            
            visited[p.second] = true;
            
            int u = p.second;
            ans += p.first;
            for(auto nbr: graph[u]) {
                if(!visited[nbr.first] && dist[nbr.first] > nbr.second) {
                    s.erase({dist[nbr.first], nbr.first});
                    dist[nbr.first] = nbr.second;
                    s.insert({nbr.second, nbr.first});
                }    
            }
        }
        
        return ans;*/
       vector<int>v(10000);
       for(int i=0;i<points.size();i++)v[i]=i;
        multiset<pair<int,pair<int,int>>>ms;
        
        map<pair<int,int>,int>mp;
        for(int i=0;i<points.size();i++){
            mp[{points[i][0],points[i][1]}]=i+1;
        }
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++){
                ms.insert({dist(points[i][0],points[i][1],points[j][0],points[j][1]),{mp[{points[i][0],points[i][1]}  ],mp[{points[j][0],points[j][1]}  ]}});
            }
        }
       int ans=0;
        for(auto &i: ms){
            int node1=i.second.first;
            int node2=i.second.second;
            int wt=i.first;
            if(find(node1,v)!=find(node2,v)){
                merge(node1,node2,v);
                ans+=wt;
                
            }
        }
       return ans;
    }
    
    int dist(int x1,int y1,int x2,int y2){
        return abs(x1-x2)+abs(y1-y2);
    }
};