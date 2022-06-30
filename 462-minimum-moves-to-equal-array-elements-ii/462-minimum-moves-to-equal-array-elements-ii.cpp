class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==nums.size()/2)
            {
                mid=nums[i];
            }
        }
        int ans=0;
        for(auto &i:nums)
        {
            ans+=abs(mid-i);
        }
        return ans;
    }
};