class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int best_buy = prices[0];

        for(int i = 0; i < n; i++){
            int profit = prices[i] - best_buy;
            max_profit = max(profit, max_profit);
            best_buy = min(best_buy, prices[i]);
        }
        return max_profit;
    }
};
