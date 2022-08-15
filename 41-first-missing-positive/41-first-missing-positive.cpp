class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>v;
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
        return k;
    }
};