class Solution {
public:
    int parent[1001];
    /*int find(int x)
    {
      if(parent[x]!=-1) parent[x]= find(parent[x]);
        return parent[x];
       /* if(parent[x]==-1)return x;
        return find(parent[x]);*/
    //}
    /*void merge(int x, int y)
    {
        parent[x]=y;
    }*/
    int find(int x){
        if(x!= parent[x])
            parent[x]= find(parent[x]);
        return parent[x];
    }
    void merge(int a,int b){
        if(a>b)
            swap(a,b);
        int ax = find(a);
        int bx = find(b);
        parent[ax] = bx;
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