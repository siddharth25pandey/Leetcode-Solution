class Solution {
public:
    bool binary_search_sid(vector<int>&v, int target)
    {
        int start=0,end=v.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(v[mid]==target)return true;
            if(v[mid]>target)end=mid-1;
            if(v[mid]<target)start=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       /*int row = 0, col = matrix[0].size()-1;
        
        while (row < matrix.size() && col >= 0) {
            
            if (target == matrix[row][col])
                return true;
            
            target > matrix[row][col] ? row++ : col--;
        }
        
        return false;*/
        for(auto &i:matrix)
        {
           // if(binary_search(i.begin(),i.end(),target))return true;
            if(binary_search_sid(i,target))return true;
        }
        return false;
    }
};