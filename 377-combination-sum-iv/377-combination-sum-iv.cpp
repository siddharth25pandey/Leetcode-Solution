class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
         vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for (int i = 0; i < target; i++) {
            if (!dp[i]) continue;
            for (auto &j : nums) if (j + i <= target) dp[i+j] += dp[i];   
        }
        return dp[target];
    }
};