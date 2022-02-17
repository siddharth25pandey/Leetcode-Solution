#include <bits/stdc++.h>
using namespace std;
class Solution {
    vector<vector<int>>ans;
    vector<int>v;
    int sum=0;
    void sid(vector<int>&a, int target, int index)
    {
        if(sum>target) return ;
        if(sum==target)
        {
            ans.push_back(v);
        }
        for(int i=index;i<a.size();i++)
        {
            sum+=a[i];
            v.push_back(a[i]);
            sid(a,target,i);
            sum-=a[i];
            v.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum=0;
        sid(candidates,target,0);
        return ans;
        
    }
};