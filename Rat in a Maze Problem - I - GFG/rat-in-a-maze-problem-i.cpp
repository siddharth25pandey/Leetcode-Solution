// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>ans;
   /* void dfs(vector<vector<int>>&m,int i, int j, int n, vector<vector<bool>>&visit, string s)
    {   
        if(i<0 or j<0 or i>=n or j>=n or visit[i][j] or !m[i][j]) return;
        
        if(i==n-1 and j==n-1)
        {
            ans.push_back(s);
            s="";
            return;
        }
        visit[i][j]=true;
        dfs(m,i+1,j,n,visit,s+'D');
         dfs(m,i-1,j,n,visit,s+'U');
         dfs(m,i,j+1,n,visit,s+'R');
          dfs(m,i,j-1,n,visit,s+'L');
          visit[i][j]=false;
    }*/
    void dfs(vector<vector<int>>&maze,vector<vector<bool>>&visit, int n, int i, int j,string s)
{
    if(i<0 or j<0 or i>=n or j>=n or visit[i][j] or !maze[i][j]) return;

    if(i==n-1 and j==n-1)
    {
        ans.push_back(s);
        s="";
        return;
    }
    visit[i][j]=true;
    dfs(maze,visit,n,i+1,j,s+'D');
    dfs(maze,visit,n,i-1,j,s+'U');
    dfs(maze,visit,n,i,j+1,s+'R');
    dfs(maze,visit,n,i,j-1,s+'L');
    visit[i][j]=false;
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<vector<bool>>visit(n,vector<bool>(n,false));
        //dfs(m,0,0,n,visit,"");
         dfs(m,visit,n,0,0,"");
        if(ans.size()) return ans;
        return {"-1"};
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends