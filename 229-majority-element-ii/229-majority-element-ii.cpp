class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=floor(nums.size()/3);
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            if(i.second>n)ans.push_back(i.first);
        }
        return ans;
    }
};