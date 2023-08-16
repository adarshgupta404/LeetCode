class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int diff;
        for(int i = 0; i<nums.size(); i++){
            diff = target - nums[i];
            if(mp.find(diff)!=mp.end())
                return {mp[diff], i};
            mp.insert({nums[i], i});
        }
        return {};
    }
};