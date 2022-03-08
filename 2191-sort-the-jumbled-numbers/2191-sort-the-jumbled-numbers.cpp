class Solution {

public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& nums) {
        vector<int>ans;
        vector<pair<int , pair<int, int>>>p;
        int n = nums.size();
        
        for(int i = 0;i<n;i++){
            string s;
            for(auto x:to_string(nums[i])){
                s+= to_string(m[x-'0']);
            }
            
            int val = stoi(s);
            //cout<<val<<endl;
            
            p.push_back({val, {i , nums[i]}});
        }
        
         sort(p.begin(), p.end());
        
         for(auto i:p){
             ans.push_back(i.second.second);
         }
        return ans;
        
        
            
            
        
    }
};