class Solution {
public:
    vector<int> partitionLabels(string s) {
         int v[256]{0};   
	 vector<int> ans;

	 for(int i=0; i<s.size(); ++i) v[s[i]]=i;

	 for(int i=0, j=-1, k=0; i<size(s); ++i)
		 if((k = max(k, v[s[i]]))==i)
			 ans.push_back(i-j), j=i; 

	 return ans;
    }
};