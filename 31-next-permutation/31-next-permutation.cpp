class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // next_permutation(nums.begin(),nums.end());
        /*int break_index=-1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                break_index=i-1;
                break;
            }
        }
        if(break_index<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else 
        {
            for(int i=nums.size();i>=0;i--)
            {
                if(nums[i]>nums[break_index])
                
                {
                    swap(nums[i],nums[break_index]);
                    reverse(nums.begin()+break_index+1,nums.end());
                    break;
                }
            }
        }*/
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