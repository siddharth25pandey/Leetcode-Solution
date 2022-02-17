#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTrees(int n) {
        int a[n+1];
        for(int i=0;i<n+1;i++)
        {
            a[i]=0;
        }
        a[0]=1;
        a[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                a[i]+=(a[i-j]*a[j-1]);
            }
        }
        return a[n];
    }
};