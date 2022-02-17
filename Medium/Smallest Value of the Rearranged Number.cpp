#include <bits/stdc++.h>
using namespace std;
class Solution {
   long long int smallest(long long int num)
{

   long long int freq[10] = {0};
       
    bool is_pos = (num>0);

    num = abs(num);
   

    while (num)
    {
        int d = num % 10; // extract last digit
        freq[d]++; // increment counting
        num = num / 10; //remove last digit
    }
     
   long long int result = 0;
   

      if(is_pos)
    {
      
      for (long long int i = 1 ; i <= 9 ; i++)
      {
          if (freq[i])
          {
              result = i;
              freq[i]--;
              break;
          }
      }
 
      
      for (long long int i = 0 ; i <= 9 ; i++)
          while (freq[i]--)
              result = result * 10 + i;
    }
    else 
    {
     
      for (long long int i = 9 ; i >= 1 ; i--)
      {
         if (freq[i])
         {
            result = i;
            freq[i]--;
            break;
         }
      }
      
      for (long long int i = 9 ; i >=0 ; i--)
         while (freq[i]--)
            result = result * 10 + i;
 
     
      result = -result;
    }
    return result;
}
public:
    long long smallestNumber(long long num) {
       long long int ans=smallest(num);
        return ans;
        
    }
};