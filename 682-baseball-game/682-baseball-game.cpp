class Solution {
public:
    int calPoints(vector<string>& o) {
       stack<int>s;
        for(auto i:o)
        {
            if(i=="C")
                s.pop();
            else if(i=="D")
            {
                s.push(s.top()*2);
            }
            else if(i=="+")
            {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b);
                s.push(a);
                s.push(a+b);
            }
            else 
            {
                s.push(stoi(i));
            }
        }
        int ans=0;
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        return ans;
        
       
            
    }
};