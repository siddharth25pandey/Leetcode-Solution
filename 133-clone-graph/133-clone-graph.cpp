/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*>m;
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
       Node* ptr= new Node(node->val,{});
        m[node]=ptr;
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                Node* temp=q.front();
                q.pop();
                for(auto nei: temp->neighbors){
               
                    if(m.find(nei)==m.end())
                    {

                        Node* t = new Node(nei->val,{});
                        m[nei] = t;
                        q.push(nei);
                        
                    }
                    m[temp]->neighbors.push_back(m[nei]);
        
                }
            }
        }
        return ptr ;
    }
};