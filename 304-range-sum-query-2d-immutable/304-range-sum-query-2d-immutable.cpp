class NumMatrix {
    vector<vector<int>>prefixsum;
public:
    NumMatrix(vector<vector<int>>& matrix):prefixsum(matrix) {
        for(auto& i:prefixsum)
        {
           for(int j = 1; j < i.size(); j++) 
                i[j] += i[j - 1];
        }
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++)
        {
            sum+=prefixsum[i][col2]-(col1?prefixsum[i][col1-1]:0);
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */