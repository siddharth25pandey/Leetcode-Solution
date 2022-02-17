#include <bits/stdc++.h>
using namespace std;
class Solution {

public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>m;
        vector<string>v;
        for(auto i:words)
        {
            m[i]++;
        }
        multimap<int, string,greater<int>> x;
        for (auto i : m) {
        x.insert({ i.second, i.first });
    }
        /*for(auto i:x)
        {
            cout <<i.first<<" "<<i.second<<endl;
        }*/
        int p=0;
        for(auto i:x)
        {
            if(p==k) break;
            v.push_back(i.second);
            p+=1;
        }
        return v;
        
    }
};