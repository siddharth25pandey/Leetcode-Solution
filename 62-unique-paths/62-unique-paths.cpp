class Solution {
public:
    int uniquePaths(int m, int n) {
       /* int dp[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 or j==0 ) dp[i][j]=1;
               else
                   dp[i][j]=dp[i-1][j]+dp[i][j-1]  ;
            }
        }
        return dp[m-1][n-1];*/
        int N = n + m - 2;// how much steps we need to do
            int k = m - 1; // number of steps that need to go down
            double res = 1;
            // here we calculate the total possible path number 
            // Combination(N, k) = n! / (k!(n - k)!)
            for (int i = 1; i <= k; i++)res = res * (N - k + i) / i;
            return (int)res;
    }
};