class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1,right=1000000000;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(sid(piles,mid,h))right=mid-1;
            else left=mid+1;
        }
        return left;
    }
    bool sid(vector<int>&piles, int k, int h)
    {
        int hours=0;
        for(auto i:piles)
        {
           
            hours+=i/k;
            if(i%k!=0)hours+=1;
            
        }
        return hours<=h;
    }
};