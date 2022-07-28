class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
         vector<int>dp(n+1,INT_MAX);
        dp[0] = 0;
        // more convenient to have the coins sorted
        sort(coins.begin(), coins.end());
        // populating our dp array
        for (int i = 1; i <=n; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            for (auto &c: coins) {
                if (i - c < 0) break;
                // if it was a previously not reached cell, we do not add use it
                if (dp[i - c] != INT_MAX) dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return dp[n] == INT_MAX ? -1 : dp[n];
    }
};