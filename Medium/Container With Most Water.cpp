#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int high=min(height[i],height[j]);
            ans=max(ans,(j-i)*high);
            while(height[i]<=high and i<j)i++;
            while(height[j]<=high and i<j)j--;
        }
        return ans;
    }
};