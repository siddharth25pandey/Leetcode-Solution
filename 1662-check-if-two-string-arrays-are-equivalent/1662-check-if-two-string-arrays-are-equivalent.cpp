class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first,second;
        for(auto i:word1) first+=i;
        for(auto i:word2)  second+=i;
        return first==second;
    }
};