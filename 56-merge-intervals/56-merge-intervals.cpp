class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
       
         vector<vector<int>>res;
        if(!arr.size())return res;
    sort(arr.begin(),arr.end());
    int index=0;
    res.push_back(arr[0]);
    for(int i=1;i<arr.size();i++)
    {
        if(res[index][1]>=arr[i][0])
        {
            res[index][1]=max(res[index][1],arr[i][1]);
        }
        else 
        {
            index++;
            res.push_back(arr[i]);
        }
    }
        return res;
    }
};