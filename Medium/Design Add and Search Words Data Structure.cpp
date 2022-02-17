#include <bits/stdc++.h>
using namespace std;
class WordDictionary {
    struct Node{
   bool isEnd;
   map <char, Node*> child;
   Node(){
      isEnd = false;
   }
};
    
public:
     Node* head;
    WordDictionary() {
         head = new Node();
    }
    
    void insertNode(Node* head, string s){
      Node* curr = head;
      int n = s.size();
      for(int i = 0; i < n; i++){
         char x = s[i];
         if(!curr->child[x]){
            curr->child[x] = new Node();
         }
         curr = curr->child[x];
      }
      curr->isEnd = true;
   }
    void addWord(string word) {
         insertNode(head, word);
    }
    bool check(Node* curr, string s, int idx = 0){
      if(idx == s.size()) return curr->isEnd;
         bool ok = false;
      if(s[idx] == '.'){
         for(int i = 0; i < 26; i++){
            char x = 'a' + i;
            if(curr->child[x] and check(curr->child[x], s, idx + 1))return true;
         }
      } else {
         char x = s[idx];
         if(curr->child[x] and check(curr->child[x], s, idx + 1))return true;
      }
      return false;
   }
  
    bool search(string word) {
        Node* curr = head;
      return check(curr, word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */