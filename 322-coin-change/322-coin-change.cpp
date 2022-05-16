class Solution {
public:
   int dp[10000];
int helper(vector<int>&nums, int amt) // Using Recursion
{   
    if(amt==0) return 0;
    if(dp[amt]!=-1) return dp[amt];
    int ans=INT_MAX;
    for(auto i:nums)
    {
        if(amt-i>=0)
        {
            ans=min(ans+0LL,helper(nums,amt-i)+1LL);
        }
    }
    return dp[amt]=ans;
}
    int coinChange(vector<int>& nums, int amt) {
         memset(dp,-1,sizeof(dp));
         int p=helper(nums,amt);
    return p==INT_MAX?-1:p;
    }
};