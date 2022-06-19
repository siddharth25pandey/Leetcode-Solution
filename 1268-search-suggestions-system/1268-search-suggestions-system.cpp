class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string s) {
         vector<vector<string>> ans;
        sort(p.begin(), p.end());
        int left = 0, right = p.size() - 1;
        for (int i = 0; i < s.length(); i++) {
            vector<string> v;
            char c = s[i];
            while (left <= right and (p[left].length() == i or  p[left][i] < c)) left++;
            while (left <= right and (p[right].length() == i or p[right][i] > c)) right--;
            for (int j = 0; j < 3 and left + j <= right; j++) v.push_back(p[left+j]); 
            ans.push_back(v);
        }
        return ans;
    }
};