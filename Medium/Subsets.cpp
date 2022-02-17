#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<vector<int>> c;
void generate(vector<int> &v, int i, vector<int> &num)
{
   
    if (i == num.size())
    {
        c.push_back(v);
        return;
    }
    generate(v, i + 1, num);
    v.push_back(num[i]);
    generate(v, i + 1, num);
    v.pop_back();
   
}
public:
    vector<vector<int>> subsets(vector<int>& num) {
     vector<int> p;
    generate(p, 0, num);
    return c;
    }
};