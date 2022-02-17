#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>&w) {
        vector<bool>v(s.size()+1,false);
        v[0]=true;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=0;j<i;j++)
            {
     if(v[j]==true and find(w.begin(),w.end(),s.substr(j,i-j))!=w.end()) // Substring check
                {
                    v[i]=true;
                    break;
                }
            }
        }
        return v.back();
    }
};