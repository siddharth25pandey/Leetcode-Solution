class Solution {
public:
   int dp[310][10000];
int helper(int index, vector<int>&nums, int amt) // Using Recursion
{   
    if(amt==0) return 1;
    if(index<0) return 0;
    if(dp[index][amt]!=-1) return dp[index][amt];
    int ans=0;
    for(int i=0;i<=amt;i+=nums[index])
    {
       
            ans+=helper(index-1,nums,amt-i);
    
    }
    return dp[index][amt]=ans;
}
    int change(int amt,vector<int>& nums) {
         memset(dp,-1,sizeof(dp));
         
    return helper(nums.size()-1,nums,amt);
    }
};