class Solution {
public:
   int minDistance(string& word1, string& word2) {        
	vector<vector<int> >dp(word1.size() + 1, vector<int>(word2.size() + 1));
	for(int i = 0; i <=word1.size(); i++) 
		for(int j = 0; j <=word2.size(); j++) 
			if(!i || !j) dp[i][j] = i + j; // if one word == "", all other characters of other word need to be deleted
			//                if characters match        ?  dont delete     : 1 deletion + min to equalize after deletion of (word1[i], word2[j])
			else dp[i][j] = word1[i - 1] == word2[j - 1] ? dp[i - 1][j - 1] : 1 + min(dp[i - 1][j], dp[i][j - 1]);
	return dp[size(word1)][size(word2)];
}
};