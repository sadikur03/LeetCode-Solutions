class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxiProfit=0;
        int n = prices.size();
        for(int i =0;i<n;i++)
        {
            int cost =prices[i]-mini;
            maxiProfit= max(maxiProfit , cost);
            mini =  min(mini, prices[i]);
        }
        return maxiProfit;
    }
};