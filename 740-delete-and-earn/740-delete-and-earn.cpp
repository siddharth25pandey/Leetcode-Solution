class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        //take the total sum by each number
        int n=10001;
    vector<int> sum(n, 0);
    vector<int> dp(n, 0);
    
    for(auto num: nums){
        sum[num] += num;
    }
    
    dp[0] = 0;
    dp[1] = sum[1];
    //now apply the house robbing concept
    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-2] + sum[i], dp[i-1]);
    }
    
    return dp[n-1];
    }
};