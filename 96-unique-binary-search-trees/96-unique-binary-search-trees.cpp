class Solution {
public:
    int numTrees(int n) {
         vector<int>v(n+1,0);
    v[0]=1;
    v[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            v[i]+=(v[i-j]*v[j-1]);
        }
    }
    return v[n];
       
    }
};