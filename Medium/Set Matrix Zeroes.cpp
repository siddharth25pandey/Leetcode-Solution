#include <bits/stdc++.h>
using namespace std;
class Solution {
    void nulify_row(vector<vector<int>>& m, int row)
    {
        for(int i=0;i<m[0].size();i++)
        {
            m[row][i]=0;
        }
    }
     void nulify_column(vector<vector<int>>& m, int column)
    {
        for(int i=0;i<m.size();i++)
        {
            m[i][column]=0;
        }
    }
public:
    void setZeroes(vector<vector<int>>& m) {
       vector<bool>a(m.size(),false);
        vector<bool>b(m[0].size(),false);
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[i].size();j++)
            {
                if(m[i][j]==0)
                {
                    a[i]=true;
                    b[j]=true;
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==true) nulify_row(m,i);
        }
         for(int i=0;i<b.size();i++)
        {
            if(b[i]==true) nulify_column(m,i);
        }
    }
};