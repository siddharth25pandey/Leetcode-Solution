#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int ans=0;
        if(nums.size()==0)return 0;
        for(auto i:nums)
        {
            s.insert(i);
        }
        for(auto i:nums)
        {
            if(s.find(i-1)==s.end())
            {
                int curr_num=i;
                int c=1;
                  while(s.find(curr_num+1)!=s.end())
            {
                curr_num++;
                c++;
            }
                 ans=max(ans,c);
            }
          
           
        }
        return ans;
    }
};