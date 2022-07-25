class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        vector<int>v={-1,-1};
    for(int i=0;i<arr.size();i++)
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
    }
    return v;
    }
};