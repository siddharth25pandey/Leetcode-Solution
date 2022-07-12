class Solution {
public:
     vector<int> sides = {0, 0, 0, 0};
    
    bool dfs(vector<int>& arr, int i, int n, int target)
    {
        if(i >= n) return true;
        for(int j = 0; j < 4; j++)
        {
            if(sides[j] + arr[i] <= target)
            {
                sides[j] += arr[i];
                if(dfs(arr, i + 1, n, target))  return true;
                sides[j] -= arr[i];
            }
        } 
        return false;
    }
    bool makesquare(vector<int>& arr) {
       int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum % 4) return false;
        sort(arr.begin(), arr.end(), greater<int> ());
        return dfs(arr, 0, arr.size(), sum/4);
    }
};