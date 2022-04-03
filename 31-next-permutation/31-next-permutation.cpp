class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=-1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                x=i-1;
               break;
            }
        }
        if(x<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[x])
            {
                swap(nums[i],nums[x]);
                reverse(nums.begin()+x+1,nums.end());
                break;
            }
        }
    }
};