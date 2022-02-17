#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans=0;
        int mask=0;
        
        for(int i=31;i>=0;i--)
        {   set<int>s;
            mask|=(1<<i);
            for(int j=0;j<nums.size();j++)
            {
                s.insert(nums[j]&mask);
            }
            int new_mask=ans| (1<<i);
            for(auto i:s)
            {
                if(s.find(new_mask^i)!=s.end())
                    
                {
                    ans=new_mask;
                    break;
                }
            }
           
        }
        return ans;
    }
};