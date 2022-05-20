class Solution {
public:
    void dfs(int i, int j,int orgc, int newc,vector<vector<int>>& image)
    {
        int n=image.size();
        int m=image[0].size();
        if(i<0 or j<0 or i>=n or j>=m or image[i][j]!=orgc)return;
        image[i][j]=newc;
        dfs(i+1,j,orgc,newc,image);
        dfs(i-1,j,orgc,newc,image);
        dfs(i,j+1,orgc,newc,image);
        dfs(i,j-1,orgc,newc,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int orgc=image[sr][sc];
        if(orgc!=newColor)
        dfs(sr,sc,orgc,newColor,image);
        return image;
    }
};