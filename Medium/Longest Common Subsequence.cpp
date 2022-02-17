#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int a[text1.size()+1][text2.size()+1];
        for(int i=0;i<=text1.size();i++)
        {
            for(int j=0;j<=text2.size();j++)
            {
                if(i==0 or j==0)
                {
                    a[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1])
                {
                    a[i][j]=a[i-1][j-1]+1;
                }
                else 
                {
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
        }
        return a[text1.size()][text2.size()];
    }
};