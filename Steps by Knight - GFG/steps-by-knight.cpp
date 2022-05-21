// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    int dir[8][2]={{-1,-2},{-1,2},{1,-2},{1,2},{-2,-1},{-2,1},{2,-1},{2,1}};
	int minStepToReachTarget(vector<int>&k,vector<int>&t,int n)
	{
	    // Code here
	    int x=k[0];
	    int y=k[1];
	    int t1=t[0];
	    int t2=t[1];
	    
	    queue<pair<int,int>> q;
	    q.push({x,y});
	    
	    vector<vector<bool>> vis(n+1,vector<bool>(n+1,false));
	    vis[x][y]=true;
	    int count=0;
	    while(!q.empty()){
	        int size=q.size();
	        for(int i=0;i<size;i++){
	            int curx=q.front().first;
	            int cury=q.front().second;
	            q.pop();
	            
	            if(curx==t1 && cury==t2)return count;
	            
	            for(int k=0;k<8;k++){
	                int dirx=curx+dir[k][0];
	                int diry=cury+dir[k][1];
	                
	                if(dirx>0 && diry>0 && dirx<=n && diry<=n && !vis[dirx][diry]){
	                    q.push({dirx,diry});
	                    vis[dirx][diry]=true;
	                }
	            }
	        }
	        count++;
	    }
	    return -1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends