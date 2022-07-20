class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int ans=0,sum=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(auto &i: nums)
        {
            sum+=i;
            ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};