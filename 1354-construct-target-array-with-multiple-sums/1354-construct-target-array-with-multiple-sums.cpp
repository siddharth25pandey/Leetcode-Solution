class Solution {
public:
    bool isPossible(vector<int>& target) {
       long long int sum = accumulate(target.begin(),target.end(),0*1LL);
        priority_queue<int> q(target.begin(),target.end());
        while (sum > 1 and q.top() > sum / 2) {
        long long int cur = q.top(); q.pop();
        sum -= cur;
        if (sum <= 1)
            return sum;
        q.push(cur % sum);
        sum += cur % sum;
    }
    return sum == target.size(); 
    }
};