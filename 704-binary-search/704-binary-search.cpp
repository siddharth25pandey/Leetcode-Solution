class Solution {
public:
    int search(vector<int>& nums, int target) {
       if(binary_search(nums.begin(),nums.end(),target)==false) return -1;
         int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target)
            {
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
       return 0;
        
    }
};