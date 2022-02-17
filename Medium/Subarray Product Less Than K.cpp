#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // Sliding Window
      if(k<=1) return 0;
        int pro=1, left=0,res=0;
        for(int i=0;i<nums.size();i++)
        {
            pro=pro*nums[i];
            // if product is greater than the given k 
			// then slide the window by doing left++ and dividing prod by nums[left] 
            while(pro>=k)
            {
                pro=pro/nums[left];
                left++;
            }
            res+=i-left+1;
        }
        return res;
    }
};