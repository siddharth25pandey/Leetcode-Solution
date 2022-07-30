class Solution {
public:
    string removeKdigits(string num, int k) {
         string ans;
        for(auto &i:num)
        {
            while(ans.size()>0 and ans.back()>i and k>0)
            {
                ans.pop_back();
                k--;
               
            }
            if(ans.size() or i!='0')ans.push_back(i);
        }
        while(ans.size()>0 and k--) ans.pop_back();   
       
        return (ans=="")?"0":ans;
    }
};