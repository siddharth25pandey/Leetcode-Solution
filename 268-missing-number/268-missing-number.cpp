class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
         //return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
        int result = nums.size(); 
        int start=0;
        for(int i:nums){ 
            result ^= i;
            result ^= start++;
        }
        return result; 
    }
    
};
    