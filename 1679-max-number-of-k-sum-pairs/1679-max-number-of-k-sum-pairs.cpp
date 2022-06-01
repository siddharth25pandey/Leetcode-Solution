class Solution {
public:
    int maxOperations(vector<int>& num, int k) {
         sort(num.begin(), num.end());
      int ans = 0;
      int i=0, j=num.size()-1;
      while(i < j){
        if(num[i] + num[j] == k){    
          ans++; i++; j--;
        } 
		else if(num[i] + num[j] > k) j--;  
        else i++;    
      }
      return ans;
    }
};