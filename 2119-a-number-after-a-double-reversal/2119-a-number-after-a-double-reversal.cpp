class Solution {
public:
    
    bool isSameAfterReversals(int num) {
        int c=0;
        while(num)
        {
            if(num%10==0 and c==0)
            {
                return false;
            }
            else {
                c++;
                num/=10;
            }
        }
        return true;
    }
};