class Solution {
    int fun(int n)
    {   int sum=0;
        while(n>0)
        {
            int a=n%10;
            sum+=pow(a,2);
            n=n/10;
        }
     return sum;
    }
public:
    bool isHappy(int n) {
        set<int>s;
        s.insert(n);
        while(1)
        {
            if(n==1)
            {
                return true;
            }
            n=fun(n);
            if(s.find(n)!=s.end())
            {
                return false;
            }
            s.insert(n);
            
        }
        return false;
    }
};