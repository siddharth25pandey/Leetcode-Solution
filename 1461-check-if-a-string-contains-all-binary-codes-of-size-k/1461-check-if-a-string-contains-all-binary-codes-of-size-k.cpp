class Solution {
public:
    void generateAllBinaryStrings(int n, string &s, int i,vector<string>&v)
{
    if (i == n) {
        v.push_back(s);
        return;
    }
    s[i] = '0';
    generateAllBinaryStrings(n, s, i + 1,v);
    s[i] = '1';
    generateAllBinaryStrings(n, s, i + 1,v);
}
    bool hasAllCodes(string s, int k) {
        /*string p;
        p.resize(k);
        vector<string>v;
         generateAllBinaryStrings(k, p, 0,v);
        for(auto i:v)
        {
            if (s.find(i) == string::npos) {
                return false;
                }
        }
        return true;*/
        if(k>s.size())return false;
        set<string>s_string;
        for(int i=0;i<=s.size()-k;i++)
        {
            s_string.insert(s.substr(i,k));
        }
        return s_string.size()==pow(2,k);
    }
};