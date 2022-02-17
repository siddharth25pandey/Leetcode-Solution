#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int z=p.size();
        vector<int>initial(26),goal(26),ans;
        for(auto i:p)
        {
            goal[i-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            initial[s[i]-'a']++;
            if(i>=z) initial[s[i-z]-'a']--;
            if(initial==goal)ans.push_back(i-z+1);
        }
      
    
        return ans;
    }
};