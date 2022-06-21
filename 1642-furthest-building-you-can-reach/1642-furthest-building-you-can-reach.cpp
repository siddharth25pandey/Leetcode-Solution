class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
       priority_queue<int> pq;
	int n = heights.size(),i=0, jumpdiff = 0;
	for( i=0;i < n - 1; i++) {
		jumpdiff = heights[i + 1] - heights[i];
		if(jumpdiff <= 0) continue;
		pq.push(-jumpdiff); 
		if(pq.size() > ladders) 
			bricks += pq.top(), pq.pop();
		if(bricks < 0) return i;
	}
	return i;
    }
};