#include <bits/stdc++.h>
using namespace std;
class Solution
{
    string decimalToBinary(int n)
    {

        string s = bitset<64>(n).to_string();

        const auto loc1 = s.find('1');

        if (loc1 != string::npos)
            return s.substr(loc1);

        return "0";
    }
    string getbits(int num)
    {
        string temp = "";
        while (num)
        {
            temp += to_string(num % 2);
            num = num / 2;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }

public:
    bool queryString(string s, int n)
    {
        string p = decimalToBinary(n);
        // string q=getbits(n);
        // cout<<q<<endl;
        for (int i = 1; i <= n; i++)
        {
            if (s.find(decimalToBinary(i)) == string::npos)
                return false;
        }
        return true;
    }
};