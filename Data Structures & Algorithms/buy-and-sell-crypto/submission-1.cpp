class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int minPrice =INT_MAX;
        for(int i=0;i<prices.size();i++){
            // for(int j = i+1;j<prices.size();j++){
            //     currProfit = prices[j] - prices[i];
            //     maxProfit = max(currProfit,maxProfit);
            // }

            minPrice = min(minPrice,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minPrice);

        }
        if(maxProfit<=0) return 0;
        return maxProfit;
    }
};
