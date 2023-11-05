class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Time = O(N*logN) + O(2*N) Space = O(N) Brute Force
        // int n = intervals.size();
        // vector<vector<int>> ans;
        // sort(intervals.begin(), intervals.end());
        // for(int i = 0; i<n; i++){
        //     int st = intervals[i][0];
        //     int end = intervals[i][1];
        //     if(!ans.empty() && end<=ans.back()[1]){
        //         continue;
        //     }  
        //     for(int j = i+1; j<n; j++){
        //         if(intervals[j][0]<=end){
        //             end = max(end, intervals[j][1]);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     ans.push_back({st, end});
        // }
        // return ans;
        // Time = O(N*logN) + O(2*N) Space = O(N) Optimal Solution
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(auto interval : intervals){
            if(ans.empty() || ans.back()[1]<interval[0]){
                ans.push_back(interval);
            }
            else{
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }
        return ans;
    }
};