class Solution {
public:
    static bool cmp(vector<int>& p1, vector<int>& p2){
        return p1[1]>p2[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(b.begin(),b.end(),cmp);
        int ans=0;
        for(auto &i: b){
            int x=min(i[0],t);  //choose minimum boxes from available boxes and capacity left
            ans+=(x*i[1]);  //adding units in ans
            t-=x;  //reduce the capacity
            if(!t) break;  //capacity full
        }
        return ans;
    }
};