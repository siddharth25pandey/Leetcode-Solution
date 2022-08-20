class Solution {
    void sid(vector<int>&a, int target, int index, int sum,vector<int>&v,vector<vector<int>>&ans)
    {
        if(sum>target) return ;
        if(sum==target) ans.push_back(v);
        for(int i=index;i<a.size();i++)
        {
            sum+=a[i];
            v.push_back(a[i]);
            sid(a,target,i,sum,v,ans);
            sum-=a[i];
            v.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        vector<int>v;
        vector<vector<int>>ans;
        sid(candidates,target,0,sum,v,ans);
        return ans;
        
    }
};