#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSquares(int n) {
       if(n<=3)
       {
           return n;
       }
        int a[n+1];
        a[0]=0;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        for(int i=4;i<=n;i++)
        {
            a[i]=i;
            for(int x=1;x<=ceil(sqrt(n));x++)
            {
                int z=x*x;
                if(z>i)
                {
                    break;
                }
                else 
                {
                    a[i]=min(a[i],1+a[i-z]);
                }
            }
        }
        return a[n];
    }
};