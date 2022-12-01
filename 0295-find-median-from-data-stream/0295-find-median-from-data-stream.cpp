// Steps:
/*
Approach
Create 2 heap, ,max heap and min heap
-------------------------------------------
1. if max_heap is empty or max_heap top is greater than inserting number then push into max_heap else
push into min_heap
2. if max_heap size is greater than min_heap size +1 then push top element of max_heap into min_heap
and pop the top element of max_heap
    else do the vice versa for min_heap.
3. if both size of heap are equal and max_heap size is zero then return 0 else return sum of top elements
divided by 2.0
4. If size of both heaps are not equal then return the top element of the greater size heap
*/
class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int> > minHeap;
	priority_queue<int> maxHeap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
         if (maxHeap.empty() or maxHeap.top() > num) {  // Condition for pushing the elements
			maxHeap.push(num);
		} else {
			minHeap.push(num);
		}

		if (maxHeap.size() > minHeap.size() + 1) {
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		} else if (minHeap.size() > maxHeap.size() + 1) {
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}
    }
    
    double findMedian() {
         
       if (maxHeap.size() == minHeap.size()) {
			if (maxHeap.empty()) {
				return 0;
			} else {
				double avg = (maxHeap.top() + minHeap.top()) / 2.0;
				return avg;
			}

		} else {
			return maxHeap.size() > minHeap.size() ? maxHeap.top() : minHeap.top();
		}
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */