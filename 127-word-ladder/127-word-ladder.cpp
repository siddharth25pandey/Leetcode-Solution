class Solution {
    int bfs(string bw, string ew, unordered_set<string> &words){
        int ladder = 0;
        queue<string> q;
        q.push(bw);
        
        while(!q.empty()){
            int size = q.size();
            ladder++;
            while(size--){
                auto curr = q.front(); q.pop();
                
                for(auto i=0; i<curr.size(); i++){
                    string temp = curr;
                    for(char j='a'; j <= 'z'; j++){
                        temp[i] = j;
                        if(temp == curr) continue;
                        if(temp == ew) return ladder + 1;
                        
                        if(words.count(temp)){
                            q.push(temp);
                            words.erase(temp);
                        }
                    }
                }   
            }
        }
        return 0;
    }
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s;
        
        for(auto word : wordList) s.insert(word);
        if(!s.count(endWord)) return 0;
        return bfs(beginWord, endWord, s);
    }
};