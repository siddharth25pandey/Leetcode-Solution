class Solution {
public:
     int CountSubsetsWithSum(vector<int>& nums,int sum) {
       int n= nums.size();
       
	int t[n + 1][sum + 1]; // DP - matrix
	// initialization
	t[0][0] = 1;
	int k = 1;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0 && j > 0)
				t[i][j] = 0;
			if (j == 0 && i > 0) {
				if (nums[i - 1] == 0) {
					t[i][j] = pow(2, k);
					k++;
				}
				else
					t[i][j] = t[i - 1][j];
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (nums[i - 1] <= j)
				t[i][j] = t[i - 1][j - nums[i - 1]] + t[i - 1][j];
			else
				t[i][j] = t[i - 1][j];
		}
	}

	return t[n][sum];
}
    int findTargetSumWays(vector<int>& nums, int target) {
         int n= nums.size();
          if(n==1) 
          {
           if(nums[0]==target or nums[0]==-1*target) return 1;
              return 0;
          }
	int sumOfArray = 0;
	for (int i = 0; i < n; i++)
		sumOfArray += nums[i];

	if ((sumOfArray + target) % 2 != 0)
		return 0;
	else
		return CountSubsetsWithSum(nums, (sumOfArray + target) / 2);

        
    }
};