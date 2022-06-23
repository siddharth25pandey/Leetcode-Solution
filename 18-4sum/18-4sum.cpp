class Solution {
public:
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         long long int n = nums.size();  
        sort(nums.begin() , nums.end()); 
        vector<vector<int>> ans;  
        set<vector<int>> store;   
		
        for(int i = 0 ; i < n; i++){
		
            for(int j = i + 1; j < n ; j++){
			
                long long int new_target  =  (target - (nums[i]*1LL) - (nums[j]*1LL));
                
                 int x = j+1 , y = n-1;
                
                while(x < y){
				    long long int sum = nums[x]*1LL + nums[y]*1LL;                    
                    if(sum > new_target) y--;
                    else if(sum < new_target ) x++;
                    else  {
                        store.insert({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    };
                }
            }
        }
		
        for(auto &i : store)ans.push_back(i); 		
        return ans;
    }
};