class Solution {
public:
    bool isValid(string s) {
   /* while(s.length() != s.length())(replace(s.begin(),s.end(),"\\(\\)|\\[\\]|\\{\\}","");
        return s.lenght()>1;*/
         stack<char> st;
        for(auto &i: s){
        if(i == '(' or  i== '{' or i== '[')st.push(i);
        else{
            if(st.empty()) return false;
            if((i== ')' and st.top() != '(') or (i == '}' and st.top() != '{') or (i == ']' and st.top() != '[') ) return false;
            st.pop();
        }
    }
    return st.empty();
    }
};