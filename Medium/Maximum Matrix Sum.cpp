#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
       
        long long sum1=0,sum2=0;
        int c=0;
        int mini=INT_MAX;
           for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<0)
                {
                    c++;
                }
                mini=min(mini,abs(matrix[i][j]));
                sum1+=abs(matrix[i][j]);
            }
        }
        
        if(c&1) return sum1-2*mini;
        return sum1;
    }
};