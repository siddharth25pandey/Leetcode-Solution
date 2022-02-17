#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        set<char> p;
        int maxsize=0;
        int i=0,j=0;
        while(j<n)
        {
            if(p.count(s[j])==0)
            {
                p.insert(s[j]);
                maxsize=max(maxsize,(int)p.size());
                j++;
            }
            else
            {
                p.erase(s[i]);
                i++;
            }
        }
        return maxsize;
    }
};