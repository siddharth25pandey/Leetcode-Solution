class Solution {
public:
    vector<vector<int>>a;
    vector<int>c,res;
     void dfs(int i, int p = -1) {
        for(auto u : a[i]) {
            if(u == p) continue;
            dfs(u, i);
            c[i] += c[u];
            res[i] += res[u] + c[u];
        }
        c[i] += 1;
    }
    void dfs1(int i, int n, int p=-1)
    {
        for(auto u:a[i])
        {
            if(u==p) continue;
            res[u]=res[i]-2*c[u]+n;
            dfs1(u,n,i);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        a.resize(n);
        for(int i=0;i<n-1;i++)
        {
            a[edges[i][0]].push_back(edges[i][1]);
            a[edges[i][1]].push_back(edges[i][0]);
        }
        res.resize(n);
        c.resize(n);
        dfs(0);
        dfs1(0,n);
        return res;
    }
};