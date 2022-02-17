#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        if(v.size()==0)return ans;
        sort(v.begin(),v.end());
        ans.push_back(v[0]);int j=0;
        for(int i=1;i<v.size();i++)
        {
            if(ans[j][1]>=v[i][0])
            {
                ans[j][1]=max(ans[j][1],v[i][1]);
            }
            else 
            {
                j++;
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};