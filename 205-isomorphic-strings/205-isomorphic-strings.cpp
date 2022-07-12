class Solution {
    public:
     string normalize_pattern(string word) {
        unordered_map<char, char> m;
        char current = 'a'; 
        for (auto &i : word) if (!m[i]) m[i] = current+=1;
         for (auto &i : word) i = m[i];
        return word;
    }
public:
    bool isIsomorphic(string s, string t) {
       return normalize_pattern(s) == normalize_pattern(t);
    }
};