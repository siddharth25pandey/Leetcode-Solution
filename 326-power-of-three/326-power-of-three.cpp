class Solution {
 
public:
    bool isPowerOfThree(int n) {
        /*double a = log(n) / log(3);
        return abs(a - round(a)) < 1e-10;*/
       	return n > 0 && 1162261467 % n == 0;
	// pow(3, floor(log(INT_MAX)/log(3))) = 1162261467 
        while(n>1)
        {
            if(n%3!=0)return false;
            n=n/3;
           
        }
         return true;
    }
};