class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        for(auto &i:matrix)
        {
            for(auto &j:i)
            {
                p.push(j);
            }
        }
        k-=1;
        while(k--)
        {//cout <<p.top()<<" ";
         p.pop();
         }
        return p.top();
    }
};