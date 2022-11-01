class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {   int m=i+1;
                int n=j+1;
                while(m<matrix.size() and n<matrix[i].size())
                {
                    if(matrix[i][j]!=matrix[m][n]) return false;
                    m++;
                    n++;
                    
                }
            }
        }
        return true;
    }
};