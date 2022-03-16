class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int k=0;
        for(auto i:pushed)
        {
            s.push(i);
            while(!s.empty() and s.top()==popped[k])
            {
                s.pop();
                k++;
            }
        }
        return s.empty();
    }
};