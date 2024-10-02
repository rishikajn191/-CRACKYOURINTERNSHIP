class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0, max=0;
        for(int i=0; i<prices.size(); i++){
            if(i==prices.size()-1)
                sum=sum;
            else    
                sum+=prices[i+1]-prices[i];
            if(sum<0)
                sum=0;
            if(max<sum)
                max=sum;
        }
        return max;
    }
};
