class Solution {
public:
    
    bool dfs(vector<vector<char>>&grid, string &word, int i, int j, int index)
{
    if(index==word.size())return true;
    if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]=='.' or grid[i][j]!=word[index]) return false;
    char  temp=grid[i][j];
    grid[i][j]='.';
    if(dfs(grid,word,i-1,j,index+1) or dfs(grid,word,i+1,j, index+1) or dfs(grid,word,i,j-1,index+1) or dfs(grid,word,i,j+1, index+1))return true;
    grid[i][j]=temp; // Backtracking step
    return false;

}
    bool exist(vector<vector<char>>& grid, string word) {
         for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[i].size();j++)
        {
            if(dfs(grid,word,i,j,0))return true;
        }
    }
    return false;       
      
    }
};