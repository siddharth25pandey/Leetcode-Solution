class Solution {
public:
    int missingNumber(vector<int>& nums) {
      
         //return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
        int result = nums.size(); // initialize result to size of vector
        int i=0; // initialize i to 0
        for(int num:nums){ // for each number in vector
            result ^= num; // XOR result with number
            result ^= i; // XOR result with i
            i++; // increment i
        }
        return result; // return result that is the missing number
    }
    
};