class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }
        int n = nums.size();
        int maj = 0;
        for (auto m : mp) {
            if (m.second > n / 2) {
                maj = m.first;
            }
        }
        return maj;
    }
};