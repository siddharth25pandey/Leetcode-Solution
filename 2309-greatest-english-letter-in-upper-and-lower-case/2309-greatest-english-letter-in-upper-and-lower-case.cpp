class Solution {
public:
    string greatestLetter(string s) {
       set<char>se;
        for(char i='a';i<='z';i++)
        {
            auto j=find(s.begin(),s.end(),i);
            auto k=find(s.begin(),s.end(),toupper(i));
            if(j!=s.end() and k!=s.end())
            {
               se.insert(toupper(i));
            }
        }
        string ans="";
        
        if(se.size()!=0)
        {
           auto i=se.end();
            i--;
            ans+=*i;
        }
        return ans;
        }
};