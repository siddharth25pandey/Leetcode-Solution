#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumTime(string s) {
              
        int ps = 0;
        int n = s.size();
        int mini = int(1e9);
        int ans = n;
        for (int i = 0; i < n; i++) {
            mini = min(mini, - 2 * ps + i);
            ps += s[i] - '0';
            ans = min(ans, 2 * ps - i + mini + n - 1);
        }
        return ans;
        
        
    }
};