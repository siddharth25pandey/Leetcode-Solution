class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       int r1=0,r2=n-1;
        int c1=0,c2=n-1;
        int k=1;
        vector<vector<int>>ans(n,vector<int>(n));
        while(r1<=r2 and c1<=c2)
        {
            for(int i=c1;i<=c2;i++)
            {
                ans[r1][i]=k++;
            }
             for(int i=r1+1;i<=r2;i++)
            {
                ans[i][c2]=k++;
            }
            if(r1<r2 and c1<c2)
            {
                
            for(int i=c2-1;i>c1;i--)
            {
                ans[r2][i]=k++;
            }
             for(int i=r2;i>r1;i--)
            {
                ans[i][c1]=k++;
            }
            }
            ++r1;
            ++c1;
            --r2;
            --c2;
        }
         return ans;
    }
   
};