class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int s=fruits.size();
        unordered_map<int,int>m;
        int k=2;
        int i=0,j=0;
        int maxi=0;
        while(j<s)
        {
            m[fruits[j]]++;
            if(m.size()<=k)
            {
                maxi=max(maxi,(j-i+1));
            }
            else if(m.size()>k)
            {
                while(m.size()>k)
                {
                      m[fruits[i]]--;
                if(m[fruits[i]]==0)m.erase(fruits[i]);
                i++;
                }
                
            }
                j++;
            
            
        }
        return maxi;
    }
};