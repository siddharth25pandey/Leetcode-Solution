class Solution {
public:
    string longestWord(vector<string>& words) {
        string ans;
        set<string>s(words.begin(),words.end());
        for(auto &i:words)
        {
            if(i.size()>ans.size() or (i.size()==ans.size() and ans>i))
            {
                bool flag=1;
                for(int j=1;j<i.size();j++)
                {
                    if(s.find(i.substr(0,j))==s.end())
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)ans=i;
            }
        }
        return ans;
    }
};