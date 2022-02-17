#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>>r(9),c(9),u(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0';
                    int k=i/3*3+j/3;
                     if (r[i].count(num) or c[j].count(num) or u[k].count(num)) 
                    return false;
                     r[i].insert(num);
                    c[j].insert(num);
                    u[k].insert(num);
                }
            }
        }
        return true;
    }
};