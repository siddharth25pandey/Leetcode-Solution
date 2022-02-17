#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string ans="";
        string store [13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int index[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        while(num>0)
        {
        for(int i=12;i>=0;i--)
        {
            int x=num/index[i];
            if(x>0)
            {
                while(x--)
                {
                    ans+=store[i];
                }
                num=num%index[i];
                break;
            }
        }
        }
        return ans;
    }
};