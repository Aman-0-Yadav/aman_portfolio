class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Bestbuy=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            if(Bestbuy<prices[i]){
                maxprofit=max(maxprofit,prices[i]-Bestbuy);
            }
            Bestbuy=min(Bestbuy,prices[i]);
        }
        return maxprofit;
    }
};