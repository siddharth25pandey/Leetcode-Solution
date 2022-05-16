class Solution {
public:
    int dp[10000];
    int helper(int amt, vector<int>&v)
    {   if(amt==0) return 0;
        if(dp[amt]!=-1) return dp[amt];
        int ans=INT_MAX;
        for(auto i:v)
        {
            if(amt-i>=0)
            {
                ans=min(ans+0LL,helper(amt-i,v)+1LL);
            }
        }
        return dp[amt]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        if(helper(amount,coins)==INT_MAX) return -1;
        else return helper(amount,coins);
    }
};