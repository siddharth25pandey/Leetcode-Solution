class Solution {
public:
    int minimumLengthEncoding(vector<string>& w) {
        unordered_set<string> wset(w.begin(), w.end());
        for (auto&j : w)
            if (wset.find(j) != wset.end())
                for (int i = 1; i < j.length(); i++) 
                    wset.erase(j.substr(i));
        int ans = wset.size();
        for (auto &i : wset) ans += i.size();
        return ans;
    }
};