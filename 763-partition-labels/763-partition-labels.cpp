class Solution {
public:
    vector<int> partitionLabels(string s) {
	vector<int> ans,v(256,0);
	for(int i=0; i<s.size(); i++) v[s[i]]=i;
	for(int i=0, j=-1, k=0; i<s.size(); i++)if((k = max(k, v[s[i]]))==i)ans.push_back(i-j), j=i;	  
	return ans;
    }
};