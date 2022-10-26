class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        /*unordered_map<int,int>mp;
         mp[0]=-1;
        if(nums.size()<2)return false;
        int runningSum=0;
        
        for(auto &i:nums)
        {
            runningSum+=i; 
            if(k!=0) runningSum = runningSum%k;    
            if(mp.find(runningSum)!=mp.end())if(i-mp[runningSum]>1) return true;
            else mp[runningSum]=i;       
        }
        
        return false;*/
        if(nums.size()<2)
            return false;
        
        //Create a hashmap of the running_sum remainder and it's respective index
        
        unordered_map<int, int> mp;
        
        //Why to insert <0,-1> for the hashmap
        
        // <0,-1> can allow it to return true when the runningSum%k=0,
        
        //for example [1,2,3] is input and k=6
        //then the remainders are [ 1,3,0] i.e runningSum = runningSum%k
        //now 1+2+3=6 which is actually a multiple of 6 and hence 0 should be stored in the hashmap
        
        //ok - but why -1?
        //-1 is good for storing for 0 because - it will remove the case where we consider only the first element which alone may be a multiple as 0-(-1) is not greater than 1
        
        // In addition, it also avoids the first element of the array is the multiple of k, since 0-(-1)=1 is not greater than 1.
        
        mp[0]=-1;
        
        int runningSum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            runningSum+=nums[i];
            
            if(k!=0) 
                runningSum = runningSum%k;
            
            //check if the runningsum already exists in the hashmap
            if(mp.find(runningSum)!=mp.end())
            {
                //if it exists, then the current location minus the previous location must be greater than1
                
                if(i-mp[runningSum]>1)
                    return true;
            }
            else
            {
                //otherwise if the current runningSum doesn't exist in the hashmap, then store it as it maybe used later on
                
                mp[runningSum]=i;
            }
                    
        }
        
        return false;
    }
};