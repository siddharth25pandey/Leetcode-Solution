class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p(stones.begin(),stones.end());
        while(1)
        {
            if(p.size()==0) return 0;
            if(p.size()==1) return p.top();
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            if(a!=b)p.push(abs(a-b));
        }
    }
};