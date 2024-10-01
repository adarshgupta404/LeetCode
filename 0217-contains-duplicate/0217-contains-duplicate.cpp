class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // O(n*n) time, O(1) space
        // bool flag = false;
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // O(n) time, O(n) space
        unordered_set<int> mp;
        for(auto num: nums){
            if(mp.find(num)==mp.end()){
                mp.insert(num);
            }else{
                return true;
            }
        }
        return false;
    }
};