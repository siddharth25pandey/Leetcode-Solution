class Solution {
public:
    int scoreOfParentheses(string S) {
        int n=S.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            if(S[i]=='('){ //Whenever we get opening brackets, we will push it in the stack, it tells we have to do some calculation
                // '(' will be represented by -1, as any computaitional value can become ascii value of '(' i.e. 40
                s.push(-1);
            }
            else{   //S[i]==')'  ,now we have to do calculation
                //We have to see top of the stack
                if(s.top()==-1){ //Case 1- ()=1
                    s.pop();
                    s.push(1);
                }
                else{ //We have some number 
                    int res=s.top();
                    s.pop();
                    if(s.top()==-1){ //Case 2- (A)=2*A
                        s.pop();
                        s.push(2*res);
                    }
                    else{  //Case 3- ABC..=A+B+C+..
                        //I will keep adding elements until I get to opening loop
                        while(!s.empty()&&s.top()!=-1){
                            res+=s.top();
                            s.pop();
                        }
                        if(!s.empty()&&s.top()==-1){
                            s.pop();
                            res=res*2;
                        }
                        s.push(res);//I will add calculated value in stack after popping out all brackets within which value is calculated
                    }
                }
            }
        }
        //I have eliminated all brackets 
        //I only have numbers remaining in my stack like 1,2,3...
        //So I have to do AB= A+B
        int ans=0;
        while(!s.empty()){
            ans+=s.top();
            cout <<ans<<" ";
            s.pop();
        }
        return ans;
    }
};