class Solution {
public:
    int minDistance(string s1, string s2) {
        int a[s1.size()+2][s2.size()+2];
        for(int i=0;i<s1.size()+1;i++)
        {
            a[i][0]=i;
        }
         for(int i=0;i<s2.size()+1;i++)
        {
            a[0][i]=i;
        }
         for(int i=1;i<s1.size()+1;i++)
        {
           for(int j=1;j<s2.size()+1;j++)
               
           {
               if(s1[i-1]==s2[j-1])
               {
                   a[i][j]=a[i-1][j-1];                   
               }
               else
               {
                    a[i][j] = 1+min(a[i-1][j],min(a[i][j-1], a[i-1][j-1]));
               }
           }
        }
              return a[s1.size()][s2.size()];
    }
};