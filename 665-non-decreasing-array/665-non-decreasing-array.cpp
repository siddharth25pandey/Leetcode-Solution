class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c=0;
        if(nums.size()<3)return true;       
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1] )
            {    if((i>0 && nums[i-1]>nums[i+1])and (i<nums.size()-2 and nums[i]>nums[i+2]))
                {
                    return false;
                }
              c++;
            }      
        }
        if(c<=1) return true;
        return false;  
    }
};