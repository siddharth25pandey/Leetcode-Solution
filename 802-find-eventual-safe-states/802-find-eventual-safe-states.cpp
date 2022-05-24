class Solution {
public:
    bool dfs(vector<vector<int>>&graph, vector<int>&colour, int index)
    {
        colour[index]=1;
        for(auto child:graph[index])
        {
            if(colour[child]==0 and dfs(graph,colour,child) or colour[child]==1) return true;
        }
        colour[index]=2;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<int>colour(n);
        
        for(int i=0;i<n;i++)
        {
            if(colour[i]==2 or !dfs(graph,colour,i))   ans.push_back(i);
        }
        return ans;
    }
};