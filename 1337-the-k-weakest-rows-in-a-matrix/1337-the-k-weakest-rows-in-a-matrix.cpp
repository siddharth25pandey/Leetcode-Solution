class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>a;
        vector<int>ans;
        int p=0;
        for(auto i:mat)
        {
            a.push_back({count(i.begin(),i.end(),1),p});
            p++;
        }
        sort(a.begin(),a.end());
        for(auto i:a)
        {
            ans.push_back(i.second);
        }
        vector<int>z;
        for(int i=0;i<k;i++)
        {
            z.push_back(ans[i]);
        }
        return z;
        
    }
};