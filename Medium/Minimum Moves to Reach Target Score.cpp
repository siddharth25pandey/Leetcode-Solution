#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
          int n = 0;
        int cnt = 0;
        while(target>1 and n<maxDoubles){
            if(target%2==0){
                cnt++;
                n++;
                target = target/2;
            }
            else{
                cnt++;
                target--;
            }
        }
        return cnt + (target-1);
    }
};