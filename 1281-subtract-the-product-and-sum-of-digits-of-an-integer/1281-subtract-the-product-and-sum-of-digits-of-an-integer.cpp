class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>p;
        int z=n;
        while(z)
        {
            p.push_back(z%10);
            z=z/10;
        }
        int pro=1;
        int sum=0;
        for(int i=0;i<p.size();i++)
        {
            pro=pro*p[i];
            sum+=p[i];
        }
        return pro-sum;
    }
};