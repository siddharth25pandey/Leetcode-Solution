class Solution {
public:
    void backtrack(string& curr, int i, vector<string> &res, int n) {
        if (i == n) {
            res.push_back(curr);
            return;
        }
        char temp = curr[i];
        backtrack(curr, i+1,res,n);
        if (!isdigit(temp)) {
            curr[i] = islower(temp) ? toupper(temp) : tolower(temp);
            backtrack(curr, i+1,res,n);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string>res; 
        backtrack(s, 0,res,s.size());
        return res;
    }
};