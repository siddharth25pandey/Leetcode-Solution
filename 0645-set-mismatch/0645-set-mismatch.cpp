class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int first_number=0,second_number=0;
        unordered_map<int,int>m;
        for(auto &i:nums)m[i]++;
        for(auto &i:m)if(i.second==2)first_number=i.first;
       int i=1;
        while(i<=nums.size())
        {
            if(m.find(i)==m.end())
            {
                second_number=i;
                break;
            }
            else i++;
                     
            
        }
        return {first_number,second_number};
    }
};