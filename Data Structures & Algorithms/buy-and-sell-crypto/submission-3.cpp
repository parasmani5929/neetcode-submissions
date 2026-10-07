class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n = prices.size();
        // int max_profit = 0;
        // int best_buy = prices[0];

        // for(int i = 0; i < n; i++){
        //     int profit = prices[i] - best_buy;
        //     max_profit = max(profit, max_profit);
        //     best_buy = min(best_buy, prices[i]);
        // }
        // return max_profit;

        int ans = 0;
        int n = prices.size();

        for(int i = 0; i <n-1; i++){
            for(int j = i +1; j < n; j++){
                ans = max(ans, prices[j] - prices[i]);
            }
        }
        return ans;
    }
};
