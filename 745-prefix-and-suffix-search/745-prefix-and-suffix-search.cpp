class WordFilter {
    public:
    unordered_map<string, int> hashMap;
    WordFilter(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= words[i].size(); j++) {
                string p = words[i].substr(0, j);
                for (int k = 0; k < words[i].size(); k++) {
                    string s = words[i].substr(k, words[i].size());
                    hashMap[p + "|" + s] = i + 1;
                }
            }
        }
    }

    int f(string prefix, string suffix) {
        string s = prefix + "|" + suffix;
        return hashMap[s] - 1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */