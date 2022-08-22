class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        int c=0;
        while(n>1)
        {
            if(n%4==0)n=n/4;
            else 
            {
                c=1;
                break;
            }
        }
        if(c==1) return false;
        return true;
    }
};