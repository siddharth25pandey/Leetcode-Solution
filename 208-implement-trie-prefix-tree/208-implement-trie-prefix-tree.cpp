class Trie {
public:
    vector<string>v;
    Trie() {
        
    }
    
    void insert(string word) {
        v.push_back(word);
    }
    
    bool search(string word) {
        auto it= find(v.begin(),v.end(),word);
        if(it!=v.end()) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        for(int i=0;i<v.size();i++)
        {
            string p=v[i].substr(0,prefix.size());
            if(p==prefix) return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */