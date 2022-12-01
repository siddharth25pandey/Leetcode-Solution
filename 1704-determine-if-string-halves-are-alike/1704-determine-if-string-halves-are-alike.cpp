class Solution {
public:
    bool halvesAreAlike(string s) {
        string a;
        string b;
        for(int i=0;i<s.size()/2;i++)
        {
            a+=s[i];
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            b+=s[i];
        }
        int c1=0,c2=0;
        for(auto i:a)
        {
            if(i=='a' or i=='A' or i=='E' or i=='e' or i=='i' or i=='I' or i=='o' or i=='O' or i=='u' or i=='U')c1++;
        }
        for(auto i:b)
        {
            if(i=='a' or i=='A' or i=='E' or i=='e' or i=='i' or i=='I' or i=='o' or i=='O' or i=='u' or i=='U')c2++;
        }
        return c1==c2;
    }
};