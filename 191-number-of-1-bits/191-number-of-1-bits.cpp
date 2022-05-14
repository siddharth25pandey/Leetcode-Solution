class Solution {
public:
    int hammingWeight(uint32_t n) {
       int ans=0;  
       /* string s=to_string(n);
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='1')ans++;
        }*/
        while(n>0){  
			ans++;
            n=n&(n-1); 
        }
        return ans;
    }
};