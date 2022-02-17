#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ans=0;
        int first_one=0;
        int last_one=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==1) 
            {
                first_one=i;
            break;
            }
        }
         for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==1) 
            {
                last_one=i;
            break;
            }
        }
        //cout <<first_one<<" "<<last_one<<endl;
         if(first_one==0 and last_one==nums.size()-1)
        {
            nums.insert(nums.end(),nums.begin(),nums.end());
        }
        for(int i=first_one+1;i<=last_one-1;i++)
        {
           if(nums[i]==0)
            {
                ans++;
            }
        }
       
        return ans;
    }
};