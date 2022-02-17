#include <bits/stdc++.h>
using namespace std;
class Solution {
    vector<string>ans;
    void sid(int f,int e,int n, string s)
    {
        if(s.size()==2*n)
        {   
            ans.push_back(s);
            return ;
        }
        if(f<n) sid(f+1,e,n,s+"(");
        if(e<f) sid(f,e+1,n,s+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        sid(0,0,n,"");
        return ans;
    }
};