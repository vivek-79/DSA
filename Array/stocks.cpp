int maxProfit(vector<int>& prices) {
        
        int mini=prices[0];
        int profit=0;

        for(int i=0;i<prices.size();i++){

            int cost =prices[i]-mini;

            profit = max(profit,cost);
            mini=min(prices[i],mini);
        }

        return profit;
    }