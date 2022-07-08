class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_pro=nums[0],x=nums[0],y=nums[0];
        for(int i=1;i<nums.size();i++)
        {   if(nums[i]<0)swap(x,y);
       
            x=max(nums[i],nums[i]*x);
           y=min(nums[i],nums[i]*y);
            max_pro=max(x,max_pro);
        }
        return max_pro;
    }
};