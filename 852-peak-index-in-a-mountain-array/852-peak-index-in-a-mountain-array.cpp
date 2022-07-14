class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       /* for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])return i;
        }
        return -1;*/
        int low = 0, high = arr.size()-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < arr[mid+1])
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};