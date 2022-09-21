class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int s) {
        int n = arr.size();
        vector<int> ans;
        for(int i = 0; i<n-1; i++)
        {
            for(int j = i+1; j<n;j++)
            {
                if(arr[i]+arr[j]==s)
                   return {i,j};
            }
        }
        return {};
    }
};