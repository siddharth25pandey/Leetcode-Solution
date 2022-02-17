#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pro=1;
        int index=-1;
        int z=0;
        if(nums.size()==2)
        {
            ans.push_back(nums[1]);
             ans.push_back(nums[0]);
        }
        else 
        {
        for(int i=0;i<nums.size();i++)
        {           if(nums[i]!=0)
                    {
                    pro*=nums[i];
                    }
         if(nums[i]==0)
         {
             index=i;
             z++;
         }
        }
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(index==i)
            {       
                c=1;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(index==i and z==1)
            {       
                ans.push_back(pro);
            }
            else if(c==1)
            {
                ans.push_back(0);
            }
            else 
            {
                 ans.push_back(pro/nums[i]);
            }
        }
        }
        
        return ans;
    }
};