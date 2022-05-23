class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        for(auto i:strs)
        {
            int zeros= count(i.begin(),i.end(),'0');
            int ones= i.size();
            for(int j=m;j>=zeros;j--)
            {
                for(int k=n;k>=(ones-zeros);k--)
                {
                    dp[j][k]=max(dp[j][k],1+dp[j-zeros][k-ones+zeros]);
                }
            }
        }
        return dp[m][n];
        
    }
};