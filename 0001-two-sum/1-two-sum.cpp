//Brute Force
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
//hash map
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int x) {
        unordered_map<int,int> m;
        for(int i = 0; i<arr.size();i++)
        {
            if(m.find(x-arr[i])!=m.end())
            {
                return {m[x-arr[i]],i};
            }
            m[arr[i]] = i;
        }
        return {};
    }
};
