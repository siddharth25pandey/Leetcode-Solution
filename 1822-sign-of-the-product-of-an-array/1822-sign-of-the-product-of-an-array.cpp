class Solution {
public:
    int arraySign(vector<int>& nums) {
        int z=0,n=0;
        for(auto i:nums)
        {
            if(i==0)z++;
            else if(i<0)n++;
        }
        if(z>0) return 0;
        if(n&1) return -1;
        return 1;
    }
};