class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       /* int ans=0;
        for(auto &i:nums)
        {
            ans^=i;
        }
        return ans;*/
        if(nums.size()==1) return nums[0];
        int left=0, right=nums.size()-1;
        
        while(left < right){
            int mid = left+(right-left)/2;
            int x = (mid%2 == 0) ? mid+1 : mid-1;
            if(nums[mid]==nums[x]) left = mid+1;
            else right = mid;
        }
        return nums[left];
        
    }
};