class Solution {
 

 
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
       long long start=1,end=1e14;
        sort(time.begin(),time.end());
        while(start<end)
        {
            long long temp=0,mid=start+(end-start)/2;
            for(auto i:time)
            {
                temp+=(mid/i);
            }
            if(temp<totalTrips)
            {
                start=mid+1;
            }
            else 
            {
                end=mid;
            }
        }
        return end;
    }
};