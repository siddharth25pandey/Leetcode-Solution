class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(auto &k:coins)
            {
                if(i-k<0)break;
                if(dp[i-k]!=INT_MAX)dp[i]=min(dp[i],1+dp[i-k]);
            }
            
        }
        if(dp[amount]==INT_MAX)return -1;
        return dp[amount];
    }
};