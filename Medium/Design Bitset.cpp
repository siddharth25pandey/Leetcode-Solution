#include <bits/stdc++.h>
using namespace std;
class Bitset {
     string s,p;
    int sz;
    int c;
public:
   
    Bitset(int size) {
        s.append(size,'0');
        p.append(size,'1');
         sz=size;
    c=0;
    }
   
    
    void fix(int idx) {
       
            if(s[idx]=='0')
                c++;
                s[idx]='1';   
                p[idx]='0';
            
        
    }
    
    void unfix(int idx) {
        if(s[idx]=='1')c--;
             s[idx]='0';   
                p[idx]='1'; 
            
    }
    
    void flip() {

        swap(s,p);
        c=sz-c;
    }
    
    bool all() {
         return sz==c;
    }
    
    bool one() {
        return c>0;
    }
    
    int count() {
       return c;
    }
    
    string toString() {
        return s;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */