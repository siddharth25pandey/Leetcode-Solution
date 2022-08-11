class Solution {
public:
    bool canFinish(int course, vector<vector<int>>& pre) {
        vector<int>graph[course+1];
        vector<int>indegree(course,0);
        for(auto &i:pre)
        {
            graph[i[1]].push_back(i[0]);
            indegree[i[0]]+=1;
        }
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