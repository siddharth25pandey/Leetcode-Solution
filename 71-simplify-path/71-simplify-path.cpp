class Solution {
public:
    string simplifyPath(string path) {
        stack<string>reverse_s;
        stack<string>s;
        string temp;
        string ans="/";
            if(path[path.size()-1]!='/')path+='/';
        int i=0;
         while(i<path.size()){
            
            if(path[i]=='/'){ // check only if we encounter '/'
                
                if(temp=="" || temp=="."){
                    // ignore
                }
                else if(temp==".."){
                    if(!s.empty()) s.pop(); // pop the top element from stack if exists
                }
                else{
                    s.push(temp); //push the directory or file name to stack
                }
                
                temp=""; // reset temp
            }
            else{
                temp.push_back(path[i]); // else append to temp
            }
            
            ++i; // increment index
        }
        
        
        if(s.empty()) return ans;
        while(!s.empty())
        {
            reverse_s.push(s.top());
            s.pop();
        }
        while(!reverse_s.empty())
        {
            ans+=reverse_s.top()+"/";
            reverse_s.pop();
            
        }
        return ans.substr(0,ans.size()-1);
    }
};