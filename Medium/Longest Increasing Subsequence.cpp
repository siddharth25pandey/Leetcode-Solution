#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(v.back()<nums[i])
                
            {
                v.push_back(nums[i]);
            }
            else 
            {
                int index=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
                v[index]=nums[i];
            }
        }
        return v.size();
    }
};