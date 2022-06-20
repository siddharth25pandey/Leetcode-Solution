class Solution {
public:
    void sortColors(vector<int>& arr) {
       /*int zero=0,one=0,two=0;
        for(auto &i:arr)
         {
            if(i==0)zero++;
            else if(i==1)one++;
            else two++;
         }
      int index=0;
       while(zero--)
          {
             arr[index++]=0;
          }
        while(one--)
        {
            arr[index++]=1;
        }
         while(two--)
        {
            arr[index++]=2;
        }*/
         int low=0,high=arr.size()-1,mid=0;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else 
        {
            swap(arr[mid],arr[high]);
            high--;
           
        }
    }
  }
};