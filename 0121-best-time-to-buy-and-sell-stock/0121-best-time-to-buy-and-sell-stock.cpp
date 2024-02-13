class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int profit = 0 ;
        int i =0;
        int minPrevBought=INT_MAX;
        while(i<prices.size())
        {
            int currPrice = prices[i];
            minPrevBought = min(currPrice,minPrevBought);
            profit = max(profit,currPrice - minPrevBought);
            i++;
        }
        return profit;
        
        
    }
};