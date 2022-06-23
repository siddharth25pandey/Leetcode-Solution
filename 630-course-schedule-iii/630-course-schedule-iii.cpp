class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](auto &a, auto &b) {return a[1] < b[1];});
        priority_queue<int> pq;
        int total = 0;
        for (auto &i : courses) {
            int dur = i[0], end = i[1];
            if (dur + total <= end) 
                total += dur, pq.push(dur);
            else if (pq.size() and pq.top() > dur)
                total += dur - pq.top(), pq.pop(), pq.push(dur);
        }
        return pq.size();
    }
};