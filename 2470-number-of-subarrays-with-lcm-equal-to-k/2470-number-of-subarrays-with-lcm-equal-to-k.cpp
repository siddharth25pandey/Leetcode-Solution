class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
         int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int currLcm = 1;
        for (int j = i; j <nums.size(); j++)
        {
            currLcm = lcm(currLcm, nums[j]);
            if (currLcm == k) cnt++;
            if (currLcm > k) break;
        }
    }
    return cnt;
    }
};