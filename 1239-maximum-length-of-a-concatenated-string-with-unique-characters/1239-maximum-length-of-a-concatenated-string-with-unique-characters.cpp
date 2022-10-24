class Solution {
public:
    int len =0;
    void checkLen(string str, vector<string> &arr, int itr) {
        if (!isUnique(str)) return;
        if (str.size() > len) len = str.size();
        for (int i = itr; i < arr.size(); i++)
            checkLen(str+arr[i], arr, i+1);
    }
    bool isUnique(string str)
    {
        set<char>s;
        for(auto &i:str)
        {
            if(s.find(i)!=s.end())return false;
            s.insert(i);
        }
        return true;
        
            
    }
    int maxLength(vector<string>& arr) {
        checkLen("",arr,0);
        return len;
    }
    
};