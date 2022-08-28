class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(!n)return 0;
        /*set<char>p;
      int ans=0,j=0,i=0;
        while(j<n)
        {
         if(p.count(s[j])==0)
         {
             p.insert(s[j++]);
             ans=max(ans,(int)p.size());
         }
            else 
            {
                p.erase(s[i++]);
            }
        }
        return ans;*/
        int ans=0;
        vector<int>v(256,-1);
        int left=0,right=0;
        while(right<n)
        {
            if(v[s[right]]!=-1)
            {
                left=max(v[s[right]]+1,left);
            }
           v[s[right]]=right;
            ans=max(ans,right-left+1);
            right+=1;
        }
        return ans;
    }
};