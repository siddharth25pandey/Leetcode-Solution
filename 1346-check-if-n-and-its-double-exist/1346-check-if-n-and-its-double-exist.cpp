class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> set;
        for(auto i:arr){
            if(set.count(2*i)>0 or ((i%2==0) and set.count(i/2)>0))
                return true;
            set.insert(i);
        }
        return false;
    }
};