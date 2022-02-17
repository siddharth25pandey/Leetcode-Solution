#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(x<i)
            {
               return false;
            }
             x=max(x,nums[i]+i);
        }
        return true;
    }
};