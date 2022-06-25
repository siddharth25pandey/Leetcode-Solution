class Solution {
    public:
    
void generate(vector<int> &v, int i, vector<int> &num, vector<vector<int>> &ans)
{
   
    if (i == num.size())
    {
        ans.push_back(v);
        return;
    }
    generate(v, i + 1, num,ans);
    v.push_back(num[i]);
    generate(v, i + 1, num,ans);
    v.pop_back();
   
}
public:
    vector<vector<int>> subsets(vector<int>& num) {
        vector<vector<int>> ans;
     vector<int> p;
    generate(p, 0, num,ans);
    return ans;
    }
};