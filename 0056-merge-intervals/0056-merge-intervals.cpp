class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        v.push_back({intervals[0][0],intervals[0][1]});
        for(int i = 1; i<intervals.size();i++)
        {
            int lastend = v[v.size()-1][1];
            if(intervals[i][0]<=lastend)
                v[v.size()-1][1] = max(lastend, intervals[i][1]);
            else
                v.push_back({intervals[i][0],intervals[i][1]});
        }
        return v;
    }
};