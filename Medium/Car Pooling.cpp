#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>m;
        for(int i=0;i<trips.size();i++)
        {
          m[trips[i][1]]+=trips[i][0];
             m[trips[i][2]]-=trips[i][0];
            
        }
        for(auto i:m)
        {
            capacity-=i.second;
            if(capacity<0) return false;
        }
        
        return true;
    }
};