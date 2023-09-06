class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ns(n), ps(n);
        stack<int> s;
        for(int i = 0; i<n; i++)
        {
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            ps[i] = s.empty()? -1 : s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        for(int i = n-1; i>=0; i--)
        {
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            ns[i] = s.empty()? n : s.top();
            s.push(i);
        }
        int res=0;
        for(int i=0; i<n; i++)
            res = max(res, heights[i] * (ns[i]-ps[i]-1));
        return res;
    }
};