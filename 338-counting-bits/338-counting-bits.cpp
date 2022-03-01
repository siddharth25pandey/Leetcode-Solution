class Solution {
    int frequency(int n)
    {   int c=0;
        for(int i=31;i>=0;i--)
        {
            if((n>>i)&1==1) c++;
        }
     return c;
    }
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(frequency(i));
        }
        return ans;
    }
};