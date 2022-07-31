class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
        vector<int>a(nums.size(),0);
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])a[i]=a[i-1]+1;
        }
        return accumulate(a.begin(),a.end(),0);
    }
};