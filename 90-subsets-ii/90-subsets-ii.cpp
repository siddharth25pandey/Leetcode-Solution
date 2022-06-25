class Solution {
     
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> ans;
    ans.push_back({});
    sort(nums.begin(), nums.end());
    vector<vector<int>> sub;
    for (int i = 0; i < nums.size(); ++i) {
        if (i == 0 or nums[i] != nums[i-1]) sub = ans;
        for (auto& j:sub) j.push_back(nums[i]);
        ans.insert(ans.end(), sub.begin(), sub.end());
    }
    return ans;
    }
};