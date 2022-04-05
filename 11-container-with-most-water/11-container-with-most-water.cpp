class Solution {
public:
    int maxArea(vector<int>& height) {
        /*int ans=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            int high=min(height[i],height[j]);
            ans=max(ans,(j-i)*high);
            while(height[i]<=high and i<j)i++;
            while(height[j]<=high and i<j)j--;
        }
        return ans;*/
         int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
};