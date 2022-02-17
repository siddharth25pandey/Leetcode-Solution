#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int x=nums[0],y=nums[0],k=1;
        if(nums.size()<2) return 0;
        for(int i=0;i<nums.size()-1;i++)
        {   
            x=max(x,i+nums[i]);
            if(y==i)
            {
              k++;  
                y=x;
            }
            
            
        }
        return k;
    }
};