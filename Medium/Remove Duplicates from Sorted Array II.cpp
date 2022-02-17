#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        vector<int>v;
       /* for(auto i:m)
        {
            cout <<i.first<<" "<<i.second<<endl;
        }
       */
        for(auto i:m)
        {
            if(i.second<3)
            {
                int x=i.second;
                while(x>0)
                {
                    v.push_back(i.first);x--;
                     //cout <<"Less than 3"<<endl;
                    
                }
               
            }
            else 
            {
                 v.push_back(i.first);
                 v.push_back(i.first);
               // cout <<"Greater than 2"<<endl;
            }
        }
        sort(v.begin(),v.end());
         for(auto i:v)
        {
            cout <<i<<endl;
        }
        for(int i=0;i<v.size();i++)
        {
         nums[i]=v[i];   
        }
        return v.size();
    }
};