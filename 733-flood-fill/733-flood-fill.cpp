class Solution {
public:
    void dfs(int i, int j,int orgc, int newc,vector<vector<int>>& image)
    {
        if(i<0 or j<0 or i>=image.size() or j>=image[0].size() or image[i][j]!=orgc)return;
        image[i][j]=newc;
        dfs(i+1,j,orgc,newc,image);
        dfs(i-1,j,orgc,newc,image);
        dfs(i,j+1,orgc,newc,image);
        dfs(i,j-1,orgc,newc,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor) dfs(sr,sc,image[sr][sc],newColor,image);
        return image;
    }
};