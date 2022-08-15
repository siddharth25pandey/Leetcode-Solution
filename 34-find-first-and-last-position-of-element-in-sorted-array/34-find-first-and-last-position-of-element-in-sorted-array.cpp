class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        vector<int>v={-1,-1};
        /*for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
             v[0]=i;
                break;
            }
        }
     for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            v[1]=i;
            break;
        }
    }*/
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(arr[mid]<x)i=mid+1;
            else 
            {
                if(arr[mid]==x) v[0]=mid;
                j=mid-1;
            }
        }
         i=0,j=arr.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(arr[mid]>x)j=mid-1;
                else 
                {
                if(arr[mid]==x) v[1]=mid;
                i=mid+1;
                }
        }
    
    return v;
    }
};