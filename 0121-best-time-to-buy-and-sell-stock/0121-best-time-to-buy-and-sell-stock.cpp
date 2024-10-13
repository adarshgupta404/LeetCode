class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int l = 0, r=1, prof = 0;
     while(r<=prices.size()){
        if(prices[r]-prices[l]>0){
            prof = max(prof, prices[r]-prices[l]);
        } else{
            l = r;
        }
        r++;
     }
     return prof;
    }
};