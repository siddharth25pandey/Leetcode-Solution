class Solution {
public:
    string normalise(string s) {
	unordered_map<char, char> m;
	char ch = 'a';
	for(auto &i : s) 
		if(!m.count(i)) m[i] = ch++;
	for(auto& i : s) i = m[i];
	return s;
}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        	vector<string> ans;           
	        for(auto& i : words) 
		    if(normalise(pattern) == normalise(i)) ans.push_back(i);
	        return ans;
    }

    
};