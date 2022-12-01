class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        for(int i = 0; i<=rowIndex;i++)
        {
            vector<int> v(i+1, 1);
            for(int j = 1; j<i;j++)
            {
                v[j] = res[i-1][j] + res[i-1][j-1];
            }
            res.push_back(v);
        }
        vector<int> v;
        for(int i = 0; i<=rowIndex;i++)
        {
            v.push_back(res[rowIndex][i]);
        }
        return v;
    }
};