class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>v;
        vector<int>vec;
        int k=0;
        if(c*r==mat.size()*mat[0].size()) 
        {
            for(int i=0;i<mat.size();i++)
            {
                for(int j=0;j<mat[i].size();j++)
                {
                    vec.push_back(mat[i][j]);
                    k++;
                    if(k==c)
                    {
                        k=0;
                       v.push_back(vec);
                        vec.clear();
                    }
                }
            }
            
        
        }
        else 
        {
            v=mat;
        }
        return v;
    }
};