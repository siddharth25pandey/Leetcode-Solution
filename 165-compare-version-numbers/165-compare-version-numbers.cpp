class Solution {
public:
    int compareVersion(string versions1, string versions2) {
      for(auto &i: versions1)if(i=='.')i=' ';
         for(auto &i: versions2)if(i=='.')i=' ';
        istringstream s1(versions1),s2(versions2);
        while(true)
        {
            int a,b;
            if(not(s1>>a))a=0;
              if(not(s2>>b))b=0;
            if( not s1 and not s2) return 0;
            if(a<b) return -1;
            if(a>b) return 1;
        
        }
    }
};