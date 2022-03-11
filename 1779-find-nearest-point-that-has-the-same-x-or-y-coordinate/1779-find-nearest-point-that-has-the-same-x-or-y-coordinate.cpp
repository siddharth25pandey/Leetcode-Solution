class Solution {
    int distance(int x1,int x2, int y1, int y2)
    {
        return abs(x1-x2)+abs(y1-y2);
    }
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1;
        int dis=INT_MAX;
        for(int i=0;i<points.size();i++)
        {   if(x==points[i][0] or y==points[i][1])
            dis=min(dis,distance(points[i][0],x,points[i][1],y)) ;  
        }
        for(int i=0;i<points.size();i++)
        {   
            if(x==points[i][0] or y==points[i][1])
          if(dis==distance(points[i][0],x,points[i][1],y))
          {
              ans=i;
              break;
          }
        }
        return ans;
    }
}; 