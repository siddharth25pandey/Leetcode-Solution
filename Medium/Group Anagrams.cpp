#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        vector<vector<string>>ans;
       unordered_map<string,vector<string>>m;
        for(auto i:strs)
        {
            string p=i;
            sort(p.begin(),p.end());
            m[p].push_back(i);
        }
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};