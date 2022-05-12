class Solution {
    vector<vector<int>> ans;
    void per(vector<int>& nums, int l, int r)
    {
    if(l==r) ans.push_back(nums);
    else 
    {
    for(int i=l;i<=r;i++)
    {
        swap(nums[l],nums[i]);
        per(nums,l+1,r);
        swap(nums[l],nums[i]);
    }
    }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       per(nums,0,nums.size()-1);
        set<vector<int>>s;
        for(auto i:ans)
        {
            s.insert(i);
        }
         vector<vector<int>>final_ans;
        for(auto i:s)
        {
            final_ans.push_back(i);
        }
        return final_ans;
    }
};