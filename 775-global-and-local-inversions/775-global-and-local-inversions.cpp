class Solution {
public:
    long long merge_global = 0;
        void merge(vector<int>& arr, int s, int e) {
        int mid = s + (e-s)/2;
        int l1 = mid - s + 1;
        int l2 = e - mid;
        int count = 0;
        // creating new array;
        int first[l1];
        int second[l2];

        //copy values
        int mainIndex = s;
        for ( int i = 0; i<l1; i++){
            first[i] = arr[mainIndex++];
        }

        mainIndex = mid + 1;
        for ( int i = 0; i<l2; i++){
            second[i] = arr[mainIndex++];
        }

        // sorting the array
        int index1 = 0;
        int index2 = 0;
        mainIndex = s;
        while(index1 < l1 && index2 < l2){
            if(first[index1]<=second[index2]){
                arr[mainIndex++] = first[index1++];
            }
            else{
               merge_global += (l1 - index1);
                arr[mainIndex++] = second[index2++];
            }
        }

        // check individually
        while(index1 < l1) {
            arr[mainIndex++] = first[index1++];
        }
        while(index2 < l2) {
            arr[mainIndex++] = second[index2++];
        }


}
void merge_sort(vector<int>& arr, long long s, long long e) {
    if(s>=e)
        return;
    int mid = s + (e-s)/2;
    // divide for left array
    merge_sort(arr,s,mid);

    //divide for right array
    merge_sort(arr,mid+1,e);

    // merge array
    merge(arr,s,e);


}
    bool isIdealPermutation(vector<int>& nums) {
        
        
        // Using Two For Loop => Time Complexity (O(n^2))
        
        int global=0,local=0;
         for(int i=0;i<nums.size()-1;i++)
        {
            
                if(nums[i]>nums[i+1])local++;
           
        }
       /* for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])global++;
            }
        }
        
        return global==local;*/
        
         // Using Merge Sort => Time Complexity (O(nlogn))
        
        merge_sort(nums,0,nums.size()-1);
        return merge_global==local;
       /* for(int i = 0 ; i < nums.size() ; i++){
            if(abs(nums[i] - i) > 1)return false;        
        }
        return true;*/
       
        
    }
};