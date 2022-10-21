class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            if(m[nums[i]] != 0 && i - m[nums[i]] < k) {
                return true;
            }
            else{
                m[nums[i]] = i+1;
            }
        }
        return false;
    }
};