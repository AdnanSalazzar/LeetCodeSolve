class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minBuyPrice = prices[0];
        int profit = 0;
        int len = prices.size();

        for (int i = 0; i < len; i++) {
            /*    if (minBuyPrice > prices[i])
                   minBuyPrice = prices[i];
            */
            minBuyPrice = min(minBuyPrice, prices[i]);

            // update the profit
            /*  if(profit < (prices[i] - minBuyPrice))
             {
                 profit = prices[i] - minBuyPrice ;
             } */
            profit = max(profit, (prices[i] - minBuyPrice));
        }

        return profit;
    }

    /*
     store the min buying price

     and finding the profit each time and storing the max
      */
};
