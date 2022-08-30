class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        /*unordered_map<int,int>m; // For unsorted
	    for(auto &i:arr)m[i]++;
	    int i=1;
            int c=0;
	    while(true)
        {   
            
	        if(m.find(i)==m.end())c++;
            i++;
            if(c==k)break;
           
        }
        return i-1;*/
       /* for (auto& i : arr) if (i <= k) k++;
        return k;*/
        
        if(k < arr[0])return k;
            
        int low=0, high=arr.size();
        while(low < high)
        {
            int mid = low + ((high - low) >> 1);
            if(arr[mid] - mid - 1 < k)
                low = mid + 1;
            else
                high = mid;
        }
        return low + k;

    }
};