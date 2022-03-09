class Solution {
public:
    double average(vector<int>& salary) {
       return (accumulate(salary.begin(),salary.end(),0.)-*max_element(salary.begin(),salary.end())-*min_element(salary.begin(),salary.end()))/(salary.size()-2);
       
        
                     }
};