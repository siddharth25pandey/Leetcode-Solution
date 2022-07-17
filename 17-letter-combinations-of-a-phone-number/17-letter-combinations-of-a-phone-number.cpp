class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> phone = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if(digits.empty())  return {};
        queue<string> q;
        vector<string> ans;
        q.push("");
        while(!q.empty()){
            string s = q.front();
            q.pop();
            
            if(s.size() == digits.size()) ans.push_back(s);
            else{
                string temp = phone[digits[s.size()] - '0'];
                for(auto &i : temp)q.push(s + i);    
            }
        }
        return ans;
    }
};