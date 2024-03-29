class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // Variation of Maximum Subarray Problem (Kadane's Algorithm)
        int max_sum=nums[0],min_sum=nums[0];
        int x=nums[0],y=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           
            x=max(nums[i],x+nums[i]);
            max_sum=max(max_sum,x);
             y=min(nums[i],y+nums[i]);
            min_sum=min(min_sum,y);
            
        }
        if(accumulate(nums.begin(),nums.end(),0)==min_sum) return max_sum;
        return max(max_sum,accumulate(nums.begin(),nums.end(),0)-min_sum);
    }
};