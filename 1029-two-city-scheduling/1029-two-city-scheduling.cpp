class Solution {
   static int com(int a,int b)
    {
       return a>b;
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
         int ans=0;
        vector<int>refund;
        for(auto i:costs){
            ans+=i[0];
            refund.push_back(i[0]-i[1]);
        }
        sort(begin(refund),end(refund),com);
        for(int i=0;i<(refund.size()/2);i++)ans-=refund[i];
        return ans;
    }
};