class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0,ans=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right++];
            while(sum>=target)
            {
                ans=min(ans,(right-left));
                sum-=nums[left++];
            }
        }
       if(ans==INT_MAX) return 0;
        return ans;
    }
};