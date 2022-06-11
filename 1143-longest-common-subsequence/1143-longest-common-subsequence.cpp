class Solution {
public:
    int dp[1005][1005];
    int LCS(string x, string y, int n,int m)
    {
        if(n==0 or m==0) dp[n][m]=0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(x[n-1]==y[m-1])
        {
           return  dp[n][m]=1+LCS(x,y,n-1,m-1);
        }
        else return dp[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
       
    }
     int longestCommonSubsequence(string &text1, string &text2,int m,int n,int memo[][1001]) {
        if(m==0 || n==0){
            return 0;
        }
        if(memo[m][n]!=-1){
            return memo[m][n];
        }
        if(text1[m-1]==text2[n-1]){
            return memo[m][n]= 1+longestCommonSubsequence(text1,text2,m-1,n-1,memo);
        }else{
            return memo[m][n]= max(longestCommonSubsequence(text1,text2,m-1,n,memo),longestCommonSubsequence(text1,text2,m,n-1,memo));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
       // Bottom Up Approach 
        /*int a[text1.size()+1][text2.size()+1];
        for(int i=0;i<=text1.size();i++)
        {
            for(int j=0;j<=text2.size();j++)
            {
                if(i==0 or j==0)
                {
                    a[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1])
                {
                    a[i][j]=a[i-1][j-1]+1;
                }
                else 
                {
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
        }
        return a[text1.size()][text2.size()];*/
        /*memset(dp, -1, sizeof(dp));
        return LCS(text1,text2,text1.size(),text2.size());*/
         int m=text1.size(),n=text2.size();
        int memo[1001][1001];
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                memo[i][j]=-1;
            }
        }
        return longestCommonSubsequence(text1,text2,m,n,memo);
    }
};