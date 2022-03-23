class Solution {
public:
    int climbStairs(int n) {
         vector<long>steps;
steps.push_back(1);
steps.push_back(2);
for(int i=2;i<=n;i++)
{
	steps.push_back(steps[i-1]+steps[i-2]);
}
return steps[n-1];

    }
};