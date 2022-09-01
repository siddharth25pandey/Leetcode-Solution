class Solution {
public:
    int solve(string &s)
{
    int ans = 0, len = 0, sum = 0;
    for (auto &i : s)
    {
        if (i == '(')
            sum += 1;
        else
            sum -= 1;
        if (sum < 0)
        {
            sum = 0;
            len = 0;
        }
        else
        {
            len += 1;
            if (sum == 0)
                ans = max(ans, len);
        }
    }
    return ans;
}

    int longestValidParentheses(string s) {
        int normal, rev;
    normal = solve(s); // O(n)
    string s1="";
    for (auto &i : s) // O(n)
    {
        s1 = (i == ')' ? '(' : ')') + s1;
    }
    rev = solve(s1); // O(n)
    return max(rev, normal);
    }
};