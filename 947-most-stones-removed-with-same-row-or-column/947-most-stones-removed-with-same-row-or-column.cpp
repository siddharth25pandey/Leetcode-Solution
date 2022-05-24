class Solution {
public:
    int dfs(vector<vector<int>>&stones,vector<bool>&visit, int index)
    {
        visit[index]=true;
        int ans=0;
        for(int i=0;i<stones.size();i++)
        {
            if(!visit[i] and (stones[i][0]==stones[index][0] or stones[i][1]==stones[index][1]))
            {
               ans+= (dfs(stones,visit,i)+1);
            }
        }
        return ans;
    }
    int removeStones(vector<vector<int>>& stones) {
        vector<bool>visit(stones.size()+1,false);
        int ans=0;
        for(int i=0;i<stones.size();i++)
        {
            if(!visit[i])
           ans+= dfs(stones,visit,i);
        }
        return ans;
    }
};