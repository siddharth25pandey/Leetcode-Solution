class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v;
        for(auto i:nums)
        {
            if(i%2==0) v.push_back(i);
        }
         for(auto i:nums)
        {
            if(i&1) v.push_back(i);
        }
        return v;
    }
};