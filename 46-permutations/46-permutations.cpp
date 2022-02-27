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
    vector<vector<int>> permute(vector<int>& nums) {
        //per(nums,0,nums.size()-1);
        vector<vector<int>>ans;
        vector<int>p=nums;
       // ans.push_back(nums);
        while(true)
        {
            next_permutation(nums.begin(),nums.end());
            ans.push_back(nums);
            if(p==nums)break;
        }
       return ans;
    }
};