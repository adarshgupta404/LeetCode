class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        int diff;
        int i = 0;
        for(auto num:nums){
            diff = target - num;
            if(mp.find(diff)!=mp.end()){
                return {mp[diff], i};
            }else{
                mp.insert({num, i});
            }
            i++;
        }
        return {};
    }
};