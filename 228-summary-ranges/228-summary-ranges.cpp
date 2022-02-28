class Solution {
public:
    vector<string> summaryRanges(vector<int>& n) {
        vector<string> r;
	for (auto p(0), q(0); q<size(n); ++q)
		if (q+1==size(n) || n[q+1]!=n[q]+1)
		{
			r.emplace_back( p!=q ? to_string(n[p])+"->"+to_string(n[q]) : to_string(n[p]) );
			p=q+1;
		}
	return r;
    
    }
};