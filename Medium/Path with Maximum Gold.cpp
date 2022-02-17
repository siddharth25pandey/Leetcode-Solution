#include <bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>>&a,int i,int j)
    {
        if(i>=a.size() or i<0 or j>=a[0].size() or j<0 or a[i][j]==0) return 0;
        int ans=0,temp=0;
        temp=a[i][j];
        a[i][j]=0;
        ans=max(ans,dfs(a,i-1,j));
         ans=max(ans,dfs(a,i+1,j));
        ans=max(ans,dfs(a,i,j+1));
         ans=max(ans,dfs(a,i,j-1));
         
        a[i][j]=temp;
        return ans+temp;
    }
    
class Solution {
    
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {   
                if(grid[i][j]>0)
                ans=max(ans,dfs(grid,i,j));
            }
        }
        return ans;
    }
};