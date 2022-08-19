class Solution {
    

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> v;
        unordered_map<int, int> count_map;
        for(auto &i: nums) count_map[i]++;
        priority_queue<pair<int, int>> maxHeap;
        for(auto &pair: count_map) maxHeap.push({pair.second, pair.first});
        while(k--)
        {
            v.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return v;
    }
};