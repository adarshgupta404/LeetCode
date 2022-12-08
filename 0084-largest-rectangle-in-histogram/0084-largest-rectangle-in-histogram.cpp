class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> ns(n), ps(n);
        stack<int> s;
        for(int i = 0; i<n; i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            ps[i] = s.empty()? -1 : s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        for(int i = n-1; i>=0; i--)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
                s.pop();
            ns[i] = s.empty()? n : s.top();
            s.push(i);
        }
        int res=0;
        for(int i=0; i<n; i++)
            res = max(res, arr[i] * (ns[i]-ps[i]-1));
        return res;
    }
};