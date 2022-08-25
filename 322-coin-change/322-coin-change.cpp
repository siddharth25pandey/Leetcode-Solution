class Solution {
public:
     int dp[100001];
    int helper(int amt, vector<int>&v)
    {   if(!amt) return 0;
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
        return helper(amount,coins)==INT_MAX?-1:helper(amount,coins);
        /*sort(coins.begin(),coins.end());
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
        return dp[amount];*/
    }
  
    
};