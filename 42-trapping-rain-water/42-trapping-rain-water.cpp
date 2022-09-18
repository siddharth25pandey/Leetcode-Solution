class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int leftHeight=0,rightHeight=0;
        int res=0;
        while(left<right)
        {
            leftHeight=max(leftHeight,height[left]);
            rightHeight=max(rightHeight,height[right]);
            if(leftHeight<rightHeight)
            {
                res+=max(0,leftHeight-height[left++]);
            }
            else 
            {
                res+=max(0,rightHeight-height[right--]);
            }
        }
        return res;
    }
};