class Solution {
public:
    int numJewelsInStones(string j, string s) {
      /*  int c=0;
        for(int i=0;i<jw.size();i++)
        {
            for(int j=0;j<st.size();j++)
            {
                if(jw[i]==st[j])
                {
                    c++;
                }
            }
        }
        return c;*/
        unordered_map<char,char>m;
        for(auto &i:s){
            m[i]++;
        }
        int count=0;
        for(auto &i:j){
            if(m.count(i)){
                count+=m[i];
            }
        }
        return count;
    }
};