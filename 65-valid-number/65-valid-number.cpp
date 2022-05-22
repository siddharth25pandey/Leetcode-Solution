class Solution {
public:
    bool isInteger(string s, int start, int end, bool isFloat) {

        if(end - start < 0 ) return false;
        
        if(s[start] == '-' || s[start] == '+') ++start;
        
        int valid_nums = 0;
        
        for(int i = start; i <= end; i++) {
            if(isFloat && s[i] == '.') {
                isFloat = false;
            }
            else if( !(s[i] >= '0' && s[i] <= '9') ) 
                return false;
            else 
                ++valid_nums;
        }
        return valid_nums > 0;
    }
    bool isNumber(string s) {
           int i;
               
        // check e
        i = s.size()-1;
        while(i >= 0 && (s[i] != 'e' and s[i] != 'E')) --i;
        
        if(i > 0) {
            // has e at i
            // i+1 to n-1 should be integer
            bool isValidInteger = isInteger(s, i+1, s.size()-1, false);
            if(!isValidInteger) return false;
        } else {
            i = s.length();
        }
        
        return isInteger(s, 0, i-1, true);
    }
};