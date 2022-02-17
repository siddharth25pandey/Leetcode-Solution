#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {   
            if(k==0 and i.second>1)ans++;
            if(m.find(i.first+k)!=m.end() and k>0)ans++;
          
        }
        return ans;
    }
};