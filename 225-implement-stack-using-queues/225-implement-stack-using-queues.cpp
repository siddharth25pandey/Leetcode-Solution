class MyStack {
    private:
    queue<int>q1;
    queue<int>q2;
public:
   
    
    void push(int x) {
       q1.push(x); 
         while(q2.empty()!=true)
    {
        q1.push(q2.front());
        q2.pop();
    }
        swap(q1,q2);
    }
    
    int pop() {
        int x=top();
        q2.pop();
        return x;
        
    }
    
    int top() {
       return q2.front();
    }
    
    bool empty() {
        if(q2.empty()) return true;
        return false;
    }
};