class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        if(n == 1)
            return nums;
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = 0; i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto e: m)
        {
            if(e.second>n/3)
                v.push_back(e.first);
        }
        return v;
        
    }
};