class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int profit = 0;
    int buy = prices[0];
    for(int i : prices){
        buy = min(buy, i);
        profit = max(profit, (i - buy));
    }
        return profit;
    }
};