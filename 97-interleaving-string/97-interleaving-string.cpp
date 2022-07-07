class Solution {
public:
    int dp[101][101];
    bool solve(string s1,string s2,string s3,int l1,int l2,int n)
    {
        if(l1>=0 and l2>=0 and dp[l1][l2]!=-1)return dp[l1][l2];
        if(l1<0 and l2<0 and n<0)
        {
            return true;
        }
        
        if(l1>=0 and n>=0 and s1[l1]==s3[n] and l2>=0 and s2[l2]==s3[n])
        {
            return dp[l1][l2]=(solve(s1,s2,s3,l1-1,l2,n-1) or solve(s1,s2,s3,l1,l2-1,n-1));
        }
        else if(l1>=0 and n>=0 and s1[l1]==s3[n])
        {
            return solve(s1,s2,s3,l1-1,l2,n-1);
        }
        else if(l2>=0 and n>=0 and s2[l2]==s3[n])
        {
           return solve(s1,s2,s3,l1,l2-1,n-1);
        }
        return false;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s3,s1.size()-1,s2.size()-1,s3.size()-1);
        
    }
};