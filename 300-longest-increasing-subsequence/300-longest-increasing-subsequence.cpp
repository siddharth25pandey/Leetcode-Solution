
class Solution {
  
public:
    //vector<int>dp(2550,-1);
    int dp[2550];
    int helper(int i, vector<int>&v)
    {   if(dp[i]!=-1) return dp[i];
        int ans=1;
        for(int j=0;j<i;j++)
        {
            if(v[i]>v[j])ans=max(ans,helper(j,v)+1);
            
        }
        return dp[i]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        //fill(dp.begin(),dp.end(),-1);
        int ans=1;
        
        for(int i=0;i<nums.size();i++)
        {
            ans=max(ans,helper(i,nums));
        }
        return ans;
    }
};