class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> postim;
        int n = position.size();
        for(int i = 0; i<n; i++){
            postim.push_back({position[i], speed[i]});
        }    
        sort(postim.begin(), postim.end());
        vector<float> time;
        for(int i = 0; i<n; i++){
            time.push_back((target*1.0 - postim[i].first*1.0)/postim[i].second*1.0);
        }
        int res = 0; 
        float curr = INT_MIN;
        for(int i = n-1; i>=0; i--){
            if(time[i]>curr){
                curr = time[i];
                res++;
            }
        }
        return res;
    }
};