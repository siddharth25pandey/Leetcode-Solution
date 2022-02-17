#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int ans=0;
        int i=0;
        int area_top=0;
        while(i<heights.size())
        {
            if(s.empty() or heights[s.top()]<heights[i])s.push(i++);
            else 
            {int top=s.top();
             s.pop();
            area_top=heights[top]*(s.empty()?i:i-s.top()-1);
            ans=max(ans,area_top);}
        }
        while(s.empty()==false)
        {int top=s.top();
        s.pop();
        area_top=heights[top]*(s.empty()?i:i-s.top()-1);
        ans=max(ans,area_top);   
        }
    return ans;
    }
};