class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi=INT_MIN;
         int res=INT_MIN;
        for(int i=1;i<values.size();i++)
        {
           
                maxi=max(maxi,(values[i-1]+i-1));
                res=max(res,maxi+values[i]-i);
           
        }
        return res;
    }
};