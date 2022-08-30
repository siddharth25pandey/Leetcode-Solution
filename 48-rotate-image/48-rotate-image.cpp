class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++)for(int j=i; j<matrix.size(); j++) swap(matrix[i][j],matrix[j][i]);  // Transpose of A
        for(int i=0; i<matrix.size(); i++)reverse(matrix[i].begin(), matrix[i].end());
    }
};