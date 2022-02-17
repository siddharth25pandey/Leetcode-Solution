#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        /*vector<int>v={-1,-1};
        
        /*for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                v[0]=i;
                break;
            }
        }*/
        //v[0]=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        /* for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                v[1]=i;
                break;
            }
        }*/
         //v[1]=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        /*if(v[0]==nums.size())
        {
            v[0]=-1;
            v[1]=-1;
        }
        return v;*/
        vector<int>v;
    v.push_back(-1);
    v.push_back(-1);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==x)
        {
            v[0]=i;
            break;
        }
    }
     for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            v[1]=i;
            break;
        }
    }
    return v;
    }
};