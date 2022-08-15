class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        /*set<int>v;
        for(auto &i:nums)
        {
            if(i>0)v.insert(i);
        }
        int k=1;
        for(auto &i:v)
        {
         if(k!=i)return k;
            else k++;
        }
        return k;*/
         for(int i = 0; i < nums.size();) {
            if(nums[i] >= 0 and nums[i] - 1 >= 0 and nums[i] - 1 < nums.size()) swap(nums[nums[i]-1], nums[i]);
            if(nums[i] <= 0 or nums[i] == i+1 or nums[i] > nums.size() or  nums[nums[i]-1] == nums[i])i++;     
         }
        for(int i = 0; i < nums.size(); i++) if(nums[i] != i + 1) return i + 1;
           
               
        return nums.size() + 1;
    }
};