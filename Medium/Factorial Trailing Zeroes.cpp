#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        int i=1;
        int x=1;
      while(n/x>=1)
      {
           x=pow(5,i);
          c+=n/x;
          i++;
      }
        return c;
    }
};