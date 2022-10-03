class Solution {
public:
    struct node {
        int cost;
        char ch;
    };
    int minCost(string colors, vector<int>& neededTime) {
        stack<node>st;
        int ans=0;
        for(int i=0;i<neededTime.size();i++)
        {
            if(!st.empty() and st.top().ch==colors[i])
            {
                if(st.top().cost<neededTime[i])
                {
                    ans+=st.top().cost;
                    st.pop();
                    st.push({neededTime[i],colors[i]});
                }
                else ans+=neededTime[i];
            }
            else
            {
                st.push({neededTime[i],colors[i]});
            }
        }
        return ans;
    }
};