class Solution {
public:
    int mySqrt(long long int x) {
      long long int low = 0,high = x+1; 
        while(low<high) {
            long long int mid = low+(high -low)/2;
            if(mid*mid>x) 
                high = mid ;
            else low = mid+1;
        }
       return low-1;
    }
};