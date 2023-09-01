class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        stack<pair<int, int>> s;
        for(int i = 0; i<n; i++){
            int currTemp  = temperatures[i];
            while(!s.empty() && currTemp > s.top().first){
                int prevTopTp = s.top().first;
                int prevTopIn = s.top().second;
                s.pop();
                res[prevTopIn] = i - prevTopIn;
            }
            s.push({currTemp, i});
        }
        return res;
    }
};