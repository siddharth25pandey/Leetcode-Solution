class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int ans=0;
        unordered_map<int,int>m;
        int mod=1e9+7;
       for(int i=0;i<arr.size();i++)
       {
           ans=(ans+m[target-arr[i]])%mod;
           for(int j=0;j<i;j++)
           {
              m[arr[i]+arr[j]]++;
           }
       }
        return ans;
    }
};