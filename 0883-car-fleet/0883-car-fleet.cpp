class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int , int>> v;
        for(int i =0 ; i< n ; i++){
            v.push_back({position[i] , speed[i]});
        }
        sort(v.begin() , v.end());
        vector<float> time;
        for(int i =0 ; i< n ; i++){
            time.push_back((target*1.0 - v[i].first*1.0)/v[i].second*1.0); 
        }

        float curr = INT_MIN;
        int res = 0;

        for(int i = n-1 ; i>=0 ; i--){
            if(time[i] > curr) {
                curr = time[i];
                res++;
            }   
        }
        return res;
    }
};