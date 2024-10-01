class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> mp;
        for(auto num: nums){
            if(mp.find(num)==mp.end()){
                mp.insert(num);
            }else{
                return true;
            }
        }
        // bool flag = false;
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        return false;
    }
};