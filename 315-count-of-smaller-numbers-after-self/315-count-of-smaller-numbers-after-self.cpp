class Solution {
public:
    
    void sort_count(vector<vector<int>>::iterator strt, vector<vector<int>>::iterator end, vector<int>& count) {
        if (end - strt <= 1) return;
        auto mid = strt + (end - strt) / 2;
        sort_count(strt, mid, count);
        sort_count(mid, end, count);
        for (auto left = strt, right = mid; left < mid; left++) {
            //here it only matters when the numbers in the left subarray that is from [strt,mid) are greater than numbers in right subarray i.e from [mid,end) 
            while (right < end && (*left)[0] > (*right)[0])
                right++;
            count[(*left)[1]] += right - mid; // add the number of valid "j"s to the indices of *i
        }
        /*
        merge(l1.begin(), l1.end(), l2.begin(), l2.end(), result.begin()); which stores the merged array in result
        inplace_merge(l.begin(), l.middle, l.end()) where array [begin, middle) is merged with array [middle, end)
        */
        inplace_merge(strt, mid, end);
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<vector<int>> hold;
        int n = nums.size();
        for (int i = 0; i < n; ++i) 
            hold.push_back({nums[i], i}); // "zip" the nums with their indices
        vector<int> count(n, 0);
        sort_count(hold.begin(), hold.end(), count);
        return count;
    }
};