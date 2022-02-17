#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long n= beans.size();
        sort(beans.begin(),beans.end());
        long long x=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++)
        {   
            sum+=beans[i];
            x=max(x,beans[i]*(n-i));
        }
        return sum-x;
    }
};