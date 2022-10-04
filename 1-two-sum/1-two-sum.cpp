class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int x) {
        unordered_map<int,int> s;
        for(int i = 0; i<arr.size();i++)
        {
            if(s.find(x-arr[i])!=s.end())
            {
                return {s[x-arr[i]],i};
            }
            s[arr[i]] = i;
        }
            
        return {};
    }
};