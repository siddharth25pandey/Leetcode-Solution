class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       /* vector<int>v;
        for(int i=0;i<nums.size();i++)
        {   int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j and nums[j]<nums[i])
                {
                    c++;
                }
            }
         v.push_back(c);
        }
        return v;*/
         unordered_map<int, int> map;
        vector<int> arr(nums.begin(),nums.end());
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (map.find(arr[i]) == map.end()) {
                map[arr[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = map[nums[i]];
        }
        return nums;
    }
};