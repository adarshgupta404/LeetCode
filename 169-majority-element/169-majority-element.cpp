class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0; i<n;i++)
        {
            m[nums[i]]++;
        }
        int maj= 0;
        for(auto e: m)
        {
            if(e.second>n/2)
                maj = e.first;
        }
        return maj;
    }
};