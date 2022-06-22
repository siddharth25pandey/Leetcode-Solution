class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        /*sort(nums.begin(),nums.end());
        return nums[nums.size()-k];*/
        priority_queue<int>p;
        for(auto &i:nums)
        {
            p.push(i);
        }
        int ans=0;
        while(!p.empty())
        {
            ans=p.top();
            k--;
            if(k<=0)break;
            p.pop();
        }
        return ans;
    }
};