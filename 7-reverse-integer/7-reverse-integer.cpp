#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse( int x) {
        int y=0;
        while(x){
            if(y>INT_MAX/10 or y<INT_MIN/10){
                return 0;
            }else{
                y=y*10 +x%10;
                x=x/10;
            }
        }
        return y;
       
    }
};