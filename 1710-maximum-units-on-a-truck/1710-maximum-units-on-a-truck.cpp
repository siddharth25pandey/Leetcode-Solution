class Solution {
public:
    static bool cmp(vector<int>& p1, vector<int>& p2){
        return p1[1]>p2[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
       // sort(b.begin(),b.end(),cmp);
        sort(b.begin(), b.end(), [](auto& a, auto& b) { return b[1] < a[1];});
        int ans=0;
        for(auto &i: b){
            int x=min(i[0],t);  
            ans+=(x*i[1]); 
            t-=x;  
            if(!t) break;  
        }
        return ans;
    }
};