class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     sort(people.begin(),people.end());
        
        int i = 0, j = people.size() - 1,ans = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else
                --j;
            
            ++ans;  // number of boats
        }
        
        return ans;   
    }
};