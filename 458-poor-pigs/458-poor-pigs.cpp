class Solution {
public:
    int poorPigs(int buckets, int p, int t) {
        return ceil(log(buckets) / log(t / p + 1)); 
    }
};