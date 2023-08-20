class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Brute Force Solution
        // int n = prices.size();
        // int res = 0;
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n && j!=n; j++){
        //         if(prices[j]-prices[i]>=0)
        //             res = max(res, prices[j]-prices[i]);
        //     }
        // }
        // return res;

        // Optimal Solution
        int mini = INT_MAX;
        int profit = 0;
        int n = prices.size();
        for(int i = 0; i<n-1; i++){
            mini = min(mini, prices[i]);
            if(prices[i+1]-mini>0)
                profit = max(profit, prices[i+1]-mini);
        }
        return profit;
    }
};