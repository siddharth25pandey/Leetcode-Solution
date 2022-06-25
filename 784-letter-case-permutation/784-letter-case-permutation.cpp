class Solution {
public:
    void backtrack(string &s, int i, vector<string> &res, int n) {
        if (i == n) {
            res.push_back(s);
            return;
        }
        char temp = s[i];
        backtrack(s, i+1,res,n);
        if (!isdigit(temp)) {
            s[i] = islower(temp) ? toupper(temp) : tolower(temp);
            backtrack(s, i+1,res,n);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string>res; 
        backtrack(s, 0,res,s.size());
        return res;
    }
};