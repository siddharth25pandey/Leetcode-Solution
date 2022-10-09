class Solution {
public:
    
    string frequencySort(string s) {
        unordered_map<char,int>m;
         for(auto &i:s)m[i]++;
        vector<pair<int,char>>v;
        for(auto &i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        string ans;
        for(int i=v.size()-1;i>=0;i--)
        {
            int c=v[i].first;
            while(c--)ans+=v[i].second;
        }
        return ans;
        
    }
};