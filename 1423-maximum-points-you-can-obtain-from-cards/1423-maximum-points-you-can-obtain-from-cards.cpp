class Solution {
public:
    int maxScore(vector<int>& c, int k) {
         int total = 0;
        for (int i = 0; i < k; i++) total += c[i];
        int best = total;
        for (int i = k - 1, j = c.size() - 1; ~i; i--, j--)
            total += c[j] - c[i], best = max(best, total);
        return best;
    }
};