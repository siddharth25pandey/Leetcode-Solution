class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int l_max=0,r_max=0,res=0;
        while(left<right)
        {
           if(height[left]>l_max)l_max=height[left];
            if(height[right]>r_max)r_max=height[right];
            
            if(l_max<r_max)
            {
                res+=max(0,l_max-height[left]);
                left++;
            }
            else 
            {
                 res+=max(0,r_max-height[right]);
                right--;
            }
        }
        return res;
    }
};