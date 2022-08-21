class Solution {
public:
    int calculate(string s) {
        s += '+';
        stack<int> st; 
        
        long long int ans = 0, curr = 0;
        char sign = '+'; //to store the previously encountered sign
        
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])) curr = curr*10 + (s[i]-'0'); //keep forming the number, until you encounter an operator
            
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                
                if(sign == '+') st.push(curr); //'Cause it has to added to the ans
            
                else if(sign == '-') st.push(curr*(-1)); //'Cause it has to be subtracted from ans
                
                else if(sign == '*'){
                    int num = st.top(); st.pop();  //Pop the top of the stack
                    st.push(num*curr); //Multiply it with the current value & push the result into stack
                }
                
                else if(sign == '/'){
                    int num = st.top();st.pop(); 
                    st.push(num/curr);  //Divide it with curr value & push it into the stack
                }
                
                curr = 0; 
                sign = s[i]; 
            }
            
        }
        
        while(st.size()){
            ans += st.top(); st.pop();
        }
            
        return ans;    
    }
};