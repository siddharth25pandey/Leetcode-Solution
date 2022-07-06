class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        vector<int>ans;
       /* for(int i=0;i<nums.size();i++)
        {    int maxi=INT_MIN;
            for(int j=i;j<i+k;j++)
            {   
                if(i+k<=nums.size())
                    maxi=max(maxi,nums[j]);
            }
            if(maxi!=INT_MIN)
            ans.push_back(maxi);
        }*/
        deque <int> q; // store index
        for(int i=0;i<nums.size();i++)
        {   
            while(!q.empty() and i-q.front()>=k)
                q.pop_front(); //only window size of k is allowed
            while(!q.empty() and nums[q.back()]<nums[i])
                q.pop_back();
            q.push_back(i);
            if(i>=k-1)ans.push_back(nums[q.front()]); //our max value in O(1)
        }
        return ans;
       
    }
};