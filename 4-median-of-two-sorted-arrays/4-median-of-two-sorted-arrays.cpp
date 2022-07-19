class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> v;
        int i=0,j=0;
        while(i<n and j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
           
        }
        while(i<n)
        {
            v.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            v.push_back(nums2[j]);
            j++;
        }
   /* for(auto i:nums1)v.push_back(i);
    for(auto i:nums2)v.push_back(i);
    sort(v.begin(),v.end());*/
        
     int t = v.size();
        double res = 0.0;
        if(t%2!=0)
        {
            res = v[floor(t/2)];
        }
        else
        {
            int p = t/2 - 1;
            res = (v[p] + v[p+1])/2.0;
        }
        
        return res;
    }
};