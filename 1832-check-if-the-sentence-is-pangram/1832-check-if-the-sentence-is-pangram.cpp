class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>m;
        for(auto i:sentence)m[i]++;
       if(m.size()==26) return true;
        return false;
        
    }
};