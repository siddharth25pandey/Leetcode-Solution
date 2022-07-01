class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>p;
        stack<char>q;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')p.push(s[i]);
            else 
            {   if(!p.empty())
                p.pop();
            }
        }
         for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')q.push(t[i]);
            else 
            {   if(!q.empty())
                q.pop();
            }
        }
        string a,b;
        while(!p.empty())
        {
            a+=p.top();
            p.pop();
        }
         while(!q.empty())
        {
            b+=q.top();
            q.pop();
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        //cout <<a<<" "<<b<<endl;
        return a==b;
    }
};