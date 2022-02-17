#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse( long int x) {
         long int res=0;
            long int z=x;
        if(x<0)
        {
            x=-x;
        }
        while(x>0)
        {
            long int a=x%10;
            
            res=res*10+a;
             x=x/10;
           
            
        }
        if(z>0)
        {
        return res;
        }
        else 
        {
            return -res;
        }
       
    }
};