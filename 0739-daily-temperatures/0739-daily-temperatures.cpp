class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i = 0; i<n; i++)
        {
            if(s.empty())
                s.push(i);
            else
            {
                while(s.size() && temp[i]>temp[s.top()])
                {
                    ans[s.top()] = i-s.top();
                    s.pop();
                }
                s.push(i);
            }
        }
        return ans;
    }
};