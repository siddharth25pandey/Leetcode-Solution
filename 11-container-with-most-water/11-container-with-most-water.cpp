class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<=j)
        {
            int len=min(height[i],height[j]);
            int width=j-i;
            int area=width*len;
            ans=max(ans,area);
            if(height[i]<height[j])i++;
            else if(height[i]>height[j])j--;
            else 
            {
                i++;
                j--;
            }
            
        }
        return ans;
        
        }
};