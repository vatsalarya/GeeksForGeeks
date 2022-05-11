// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i=0;
        int price=prices[0];
        while(i<prices.size()){
            if(prices[i]<price){
                price=prices[i];
            }
            else{
                profit+=prices[i]-price;
                price=prices[i];
            }
            i++;
        }
        return profit;
    }
};