/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int a=1;int b=n;
        while(a<=b)
        {
            int g=a+(b-a)/2;
            if(guess(g)==0)
            {
                return g;
            }
            else if(guess(g)==1)
            {
                a=g+1;
            }
            else 
            {
                b=g-1;
            }
        }
        return 0;
    }
};