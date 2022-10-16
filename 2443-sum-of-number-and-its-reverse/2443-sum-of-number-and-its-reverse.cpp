class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i =num/2;i<=num;i++)
        {
            string s = to_string(i);
            reverse(s.begin(),s.end());
            int n = stoi(s);
            if((i+n)==num)return true;
                
            
        }
        return false;
    }
};