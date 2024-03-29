class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> s(begin(nums), end(nums)); 
	int ans = 0;
	for(auto& num : s) {
		int cur_longest = 1;
		// find consecutive elements in the backward and forward direction from num
		for(int j = 1; s.count(num - j); j++) s.erase(num - j), cur_longest++;
		for(int j = 1; s.count(num + j); j++) s.erase(num + j), cur_longest++;
		ans = max(ans, cur_longest);  // update longest to hold longest consecutive sequence till now
	}
	return ans;
    }
};