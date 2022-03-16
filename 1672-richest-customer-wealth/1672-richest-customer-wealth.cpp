class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans=INT_MIN;
        for(int i=0;i<a.size();i++)
        {   
            int sum=accumulate(a[i].begin(),a[i].end(),0);
            ans=max(ans,sum);
           
        }
        return ans;
    }
};