
class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int> > minHeap;
	priority_queue<int> maxHeap;
    multiset<int>s;
    bool is_even=true;
   multiset<int>::iterator i=s.begin();
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        s.insert(num);
        is_even=!is_even;
        if(i==s.end() or (is_even and *i<=num))i++;
        if(!is_even and *i>num)i--;
         /*if (maxHeap.empty() or maxHeap.top() > num) {
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
		}*/
    }
    
    double findMedian() {
         return (!is_even)? *i : (*i + *prev(i)) / 2.0;
       /* if (maxHeap.size() == minHeap.size()) {
			if (maxHeap.empty()) {
				return 0;
			} else {
				double avg = (maxHeap.top() + minHeap.top()) / 2.0;
				return avg;
			}

		} else {
			return maxHeap.size() > minHeap.size() ? maxHeap.top() : minHeap.top();
		}*/
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */