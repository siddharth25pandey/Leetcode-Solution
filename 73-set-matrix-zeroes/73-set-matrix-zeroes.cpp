class Solution {
public:
    void null_row(vector<vector<int>>&matrix, int row)
    {
        for(int i=0;i<matrix[0].size();i++)
        {
            matrix[row][i]=0;
        }
    }
     void null_column(vector<vector<int>>&matrix, int col)
    {
        for(int i=0;i<matrix.size();i++)
        {
            matrix[i][col]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool>row(matrix.size(),false);
        vector<bool>col(matrix[0].size(),false);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<row.size();i++)
        {
            if(row[i]==true)
            {
                null_row(matrix,i);
            }
        }
        for(int i=0;i<col.size();i++)
        {
            if(col[i]==true)
            {
                null_column(matrix,i);
            }
        }
    }
};