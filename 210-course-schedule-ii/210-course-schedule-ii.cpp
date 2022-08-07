class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        vector<int>graph[num];
        vector<int>inDegree(num,0);
        for(auto &i:pre)
        {
            graph[i[1]].push_back(i[0]);
            inDegree[i[0]]++;
        }
        queue<int>q;
        for(int i=0;i<num;i++)
        {
            if(!inDegree[i])q.push(i);
        }
        vector<int>ans;
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                int val=q.front();
                q.pop();
                ans.push_back(val);
              for(auto &j:graph[val])
              {
                inDegree[j]-=1;
                  if(!inDegree[j])q.push(j);
              }

            }
            
        }
        
        vector<int>res;
        return (ans.size()==num)?ans:res;
    }
};