class MyCalendar {
public:
    unordered_map<int, int>bookings;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto& [s, e] : bookings) 
            if( !(start >= e or s >= end) ) return false;    // if neither of above condition is satisfied, there exists an intersection
			    
        bookings[start] = end;                 // no intersection found, so insert the new slot and return true
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */