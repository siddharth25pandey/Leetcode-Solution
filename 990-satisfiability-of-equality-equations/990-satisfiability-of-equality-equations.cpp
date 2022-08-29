class Solution {
public:
    int parent[1001];
   
    int find(int x){
        if(parent[x]!=x)parent[x]= find(parent[x]);      
        return parent[x];
    }
    void merge(int a,int b){
        parent[find(a)] = find(b);
    }
    bool equationsPossible(vector<string>& eq) {
        for(int i=0;i<26;i++)
        {
            parent[i]=i;
        }
        for(auto &i:eq)
        {
            if(i[1]=='=')
            {
                merge(i[0]-'a',i[3]-'a');
            }
        }
        for(auto &i:eq)
        {
            if(i[1]=='!' and find(i[0]-'a')==find(i[3]-'a'))return false;  
        }
        return true;
    }
};