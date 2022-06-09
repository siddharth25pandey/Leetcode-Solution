class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>index;
        unordered_map<int,int>m;
        for(int i=0;i<numbers.size();i++)
        {
            if(m.find(target-numbers[i])!=m.end())
            {
                index.push_back(m[target-numbers[i]]+1);
             index.push_back(i+1);
             break;
                return index;
             }
             m[numbers[i]]=i;
        }
          return index;
    }
};