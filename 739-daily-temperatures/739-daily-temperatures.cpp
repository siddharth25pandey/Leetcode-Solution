class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>v(n,0);
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() and t[s.top()]<=t[i])s.pop();
            if(!s.empty())v[i]=s.top()-i;
            s.push(i);
        }
        return v;
    }
};