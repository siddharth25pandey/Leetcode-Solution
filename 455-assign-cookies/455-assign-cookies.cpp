class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
       sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int i=0,j=0;
        while(i<g.size() and j<s.size())
        {
            if(s[j]>=g[i])
            {
                ans++;
                i++;
                j++;
            }
            else if(s[j]<g[i])i++;
        }
        return ans;
    }
};