class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        /*int global=0,local=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])global++;
            }
        }
         for(int i=0;i<nums.size()-1;i++)
        {
            
                if(nums[i]>nums[i+1])local++;
           
        }
        return global==local;*/
         for (int i = 0; i < nums.size(); i++)
            if (i -nums[i] > 1 or  i - nums[i] < -1) return false;
        return true;
        
    }
};