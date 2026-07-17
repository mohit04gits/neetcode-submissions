class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int currProfit = INT_MIN;
        for(int i=0;i<prices.size()-1;i++){
            for(int j = i+1;j<prices.size();j++){
                currProfit = prices[j] - prices[i];
                maxProfit = max(currProfit,maxProfit);
            }
        }
        if(maxProfit<=0) return 0;
        return maxProfit;
    }
};
