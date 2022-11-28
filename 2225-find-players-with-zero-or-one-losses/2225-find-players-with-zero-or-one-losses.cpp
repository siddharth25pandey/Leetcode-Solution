class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        vector<vector<int>>ans;
        vector<int>no_loss;
        vector<int>one_loss;
        unordered_map<int,int>l;
        unordered_map<int,int>w;
        for(auto i:m)
        {
            l[i[1]]++;
            w[i[0]]++;
        }
        for(auto i:w)
        {   
            if(l.find(i.first)==l.end())
            {
            no_loss.push_back(i.first);   
            }
        }
        for(auto i:l)
        {   
            if(i.second==1)
            {
            one_loss.push_back(i.first);   
            }
        }
        sort( no_loss.begin(), no_loss.end());
         sort(one_loss.begin(), one_loss.end());
        ans.push_back(no_loss);
        ans.push_back(one_loss);
        return ans;
    }
};