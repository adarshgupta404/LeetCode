class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int cnt = INT_MIN;
        int dup = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(m[nums[i]]>1)
            {
                dup = max(nums[i], dup);
            }
        }
        return dup;
    }
};