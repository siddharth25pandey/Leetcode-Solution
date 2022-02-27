class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>p=nums;
       while(1)
        {   
           next_permutation(nums.begin(),nums.end());
           
            ans.push_back(nums);
           if(nums==p) break;
        }
        return ans;
    }
};