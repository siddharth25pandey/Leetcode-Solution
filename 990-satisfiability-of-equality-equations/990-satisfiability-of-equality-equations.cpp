class Solution {
public:
    int find(int x, int parent[]){
        if(parent[x]!=x)parent[x]= find(parent[x],parent);      
        return parent[x];
    }
    void merge(int a,int b,int parent[]){
        parent[find(a,parent)] = find(b,parent);
    }
    bool equationsPossible(vector<string>& eq) {
        int parent[1001];
        for(int i=0;i<26;i++)  parent[i]=i;
        for(auto &i:eq) if(i[1]=='=')merge(i[0]-'a',i[3]-'a',parent);
        for(auto &i:eq)
        {
            if(i[1]=='!' and find(i[0]-'a',parent)==find(i[3]-'a',parent))return false;  
        }
        return true;
    }
};