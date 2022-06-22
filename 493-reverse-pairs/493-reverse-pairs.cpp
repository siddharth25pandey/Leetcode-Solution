class Solution {
public:
    int count = 0;
    void merge(vector<int>& left, vector<int>& right, vector<int>& nums) {
        int i = 0, j = 0, k = 0;
        
        for (i = 0; i < left.size(); i++) {            
            while (j < right.size() and left[i] > right[j]*2LL)
                j++;
            count += j;
        }
        
        i = 0, j = 0;        
        while (i < left.size() and j < right.size()) {
            if (left[i] < right[j])
                nums[k++] = left[i++];
            else 
                nums[k++] = right[j++];
        }
        
        while (i < left.size())
            nums[k++] = left[i++];
        
        while (j < right.size())
            nums[k++] = right[j++];
    }
    
    void mergeSort(vector<int>& nums) {
        if (nums.size() < 2)
            return;
        
        int mid = nums.size() / 2;
        vector <int> left;
        vector <int> right;
        
        for (int i = 0; i < mid; i++)
            left.push_back(nums[i]);
        
        for (int i = mid; i < nums.size(); i++)
            right.push_back(nums[i]);
        
        mergeSort(left);
        mergeSort(right);        
        
        merge(left, right, nums);
    }
    int reversePairs(vector<int>& nums) {
      //Naive Approach
        /*int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]*1LL > 2*nums[j]*1LL)ans++;
            }
        }
        return ans;*/
        mergeSort(nums);
        return count;
    }
};