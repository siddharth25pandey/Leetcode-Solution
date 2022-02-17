#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int>ans;
        vector<int>tot(nums.size()+1,0);
       vector<int>zero(nums.size()+1,0);
        vector<int>one(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)zero[i+1]=zero[i]+1;
            else zero[i+1]=zero[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==1)one[i]=one[i+1]+1;
            else one[i]=one[i+1];
        }
         for(int i=0;i<nums.size()+1;i++)
        {
            tot[i]=(zero[i]+one[i]);
        }      
         int maxi=*max_element(tot.begin(),tot.end());
         for(int i=0;i<tot.size();i++)
        {
            if(tot[i]==maxi)ans.push_back(i);
        } 
                       
                       
       
        return ans;
    }
};