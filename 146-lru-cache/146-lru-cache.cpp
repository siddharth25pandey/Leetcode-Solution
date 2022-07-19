class LRUCache {
    list<pair<int,int>>v;
    unordered_map<int,list<pair<int,int>>::iterator>m;
    int size;
public:
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1; 
         v.splice(v.begin(),v,m[key]);
        return m[key]->second;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
              v.splice(v.begin(),v,m[key]);
             m[key]->second=value;
            return;
        }
        if(v.size()==size)
        {
            auto i=v.back().first;
            v.pop_back();
            m.erase(i);
        }
        v.push_front({key,value});
        m[key]=v.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */