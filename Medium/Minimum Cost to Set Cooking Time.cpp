#include <bits/stdc++.h>
using namespace std;
class Solution {
     int cost(int startAt, int moveCost, int pushCost, string num){
        char cur_num = startAt + '0';
        int cost = 0;
        for(char digit : num){
            if(cur_num!=digit){
                cost += moveCost;
                cur_num = digit;
            }
            cost+=pushCost;
        }
        return cost;
    }
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
       int minutes = targetSeconds/60;
        int seconds = targetSeconds%60;
        int num1 = minutes*100 + seconds;
        int num2 = (minutes-1)*100 + seconds+60;;
        if(minutes>=100)
            return cost(startAt, moveCost, pushCost, to_string(num2));
        if(seconds+60 < 100){
            return min(cost(startAt, moveCost, pushCost, to_string(num1)), cost(startAt, moveCost, pushCost, to_string(num2)));
        }
        return cost(startAt, moveCost, pushCost, to_string(num1));
    }
};