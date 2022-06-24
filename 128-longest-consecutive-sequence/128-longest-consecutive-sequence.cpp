class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       /* if(!nums.size())return 0;
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        int ans=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(abs(v[i+1]-v[i])<=1)ans++;
        }
        return ans;*/
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        if(!nums.size())return 0;
        
        for(auto i:nums)
        {
            if(s.find(i-1)==s.end())
            {
                int curr_num=i;
                int c=1;
                  while(s.find(curr_num+1)!=s.end())
            {
                curr_num++;
                c++;
            }
                 ans=max(ans,c);
            }
          
           
        }
        return ans;
    }
};