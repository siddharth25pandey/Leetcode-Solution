class Solution {
public:
    void dfs(string s, string sentence, set<string>& wordDict, vector<string>&ans){
    if(!s.size())
    {
        sentence.pop_back();
        ans.push_back(sentence);
        return;
    }
    for(int i = 1; i <= s.size(); i++)
    {
        if(!wordDict.count(s.substr(0, i)))continue;
        dfs(s.substr(i), sentence + s.substr(0, i) + " ", wordDict,ans); 
    }
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        set<string> setting(wordDict.begin(), wordDict.end());
        vector<string> ans;
        dfs(s, "", setting,ans);
        return ans;
    }
};