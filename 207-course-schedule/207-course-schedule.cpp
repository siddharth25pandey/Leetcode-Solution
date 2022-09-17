class Solution {
public:
    // Using Union-Find(DFU)
    int find(int i, int par[])
    {
        if(par[i]!=i)par[i]=find(par[i],par);
        return par[i];
    }
    void merge(int a, int b, int par[])
    {
        par[find(a,par)]=find(b,par);
    }
    bool canFinish(int course, vector<vector<int>>& pre) { // Topological sort
        vector<int>graph[course+1];
        int par[10001];
        for(int i=0;i<26;i++)
        {
            par[i]=i;
        }
        vector<int>indegree(course,0);
        for(auto &i:pre)
        {
            graph[i[1]].push_back(i[0]);
            indegree[i[0]]+=1;
        }
        /*for(auto &i:pre)
        {
            if(find(i[1],par)==find(i[0],par))return false;
            merge(i[0],i[1],par);
        }
        return true;*/
        
        queue<int>q;
        for(int i=0;i<indegree.size();i++)
        {
            if(!indegree[i])q.push(i);
        }
        vector<int>ans;
        while(!q.empty())
        {   
        
            int size=q.size();
            while(size--)
            {
                int val=q.front();
                q.pop();
                ans.push_back(val);
                for(auto &i:graph[val])
                {
                    indegree[i]-=1;
                    if(!indegree[i])q.push(i);
                }
            }
            

            
        }

        return ans.size()==course;
        
        
        
    }
};