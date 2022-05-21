class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')continue;
            string word;
            while(i<s.size() and s[i]!=' ')
            {
                word+=s[i++];
                
            }
            st.push(word);
           
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};