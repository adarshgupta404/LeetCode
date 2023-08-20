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
        // int mini = 100000;
        // int profit = 0;
        // int n = prices.size();
        // for(int i = 0; i<n-1; i++){
        //     mini = min(mini, prices[i]);
        //     if(prices[i+1]-mini>0)
        //         profit = max(profit, prices[i+1]-mini);
        // }
        // return profit;

        //Two Pointer Technique
        int l = 0, r = 1, profit = 0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                profit = max(profit, prices[r]-prices[l]);
            }
            else
                l = r;
            ++r;
        }
        return profit;
    }
};