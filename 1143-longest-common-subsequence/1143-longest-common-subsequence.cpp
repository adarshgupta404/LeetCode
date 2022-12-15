class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        short arr[1000][1000] = {};
        for(int i = 0; i<a.size(); i++)
        {
            for(int j = 0; j<b.size(); j++)
            {
                arr[i+1][j+1] = a[i]==b[j]?arr[i][j]+1:max(arr[i+1][j], arr[i][j+1]);
            }
        }
        return arr[a.size()][b.size()];
    }
};