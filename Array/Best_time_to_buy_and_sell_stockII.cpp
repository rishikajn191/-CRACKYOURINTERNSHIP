class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0; i<prices.size(); i++){
            if(i==prices.size()-1)
                return profit;
            else{
                if(prices[i+1]-prices[i]>0)
                    profit+=prices[i+1]-prices[i];
            }
        }
        return 0;
    }
};
