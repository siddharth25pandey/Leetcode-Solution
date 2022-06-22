class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<int,int> mp;
        int res = 0;
        for(auto &i:s) {
            mp[i]++;
            if(mp[i]%2==0) {
                res += mp[i];
                mp[i] = 0;
            }
        }
        for(auto &i: mp) {
            if(i.second==1) {
              res++;
              break;
            }  
        }
        return res;
    }
};