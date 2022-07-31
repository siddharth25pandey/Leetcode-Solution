class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy=prices[0],sell=0;
        for(int i=1;i<prices.size();i++)
        {
            sell=max(sell,prices[i]-buy-fee);
            buy=min(buy,prices[i]-sell);
        }
        return sell;
    }
};