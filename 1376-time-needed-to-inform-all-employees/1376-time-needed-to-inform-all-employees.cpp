// BFS
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<manager.size();i++)
        {
            m[manager[i]].push_back(i);
        }
        queue<pair<int,int>>q;
        q.push({headID,0});
               int ans=INT_MIN;
               while(!q.empty())
               {
                   int size=q.size();
                   for(int i=0;i<size;i++)
                   {
                       int head=q.front().first;
                       int time=q.front().second;
                       q.pop();
                       int duration=informTime[head]+time;
                       ans=max(ans,duration);
                       for(auto i:m[head])
                       {
                           q.push({i,duration});
                       }
                                        
                   }
               }
               return ans;
                
    }
};