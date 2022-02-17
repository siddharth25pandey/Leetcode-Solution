#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool f(vector<int>& nums, int s) {
       bool dp[s + 1];
       memset(dp, false, sizeof(dp));
       dp[0] = true; 
       for(int n : nums) {
           for(int i=s;i>=n;i--) {
               dp[i] = dp[i] || dp[i - n];
           }
       }
        
       return dp[s];
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int n : nums) sum += n;
        
        return (sum%2 == 0) ? f(nums, sum/2) : false;
    }
};