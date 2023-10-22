class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i<nums.size()-2; i++){
            for(int j = i+1; j<nums.size()-1; j++){
                for(int k = j+1; k<nums.size(); k++){
                    if(nums[i]<nums[j] && nums[k]<nums[j])
                        ans = min(ans, nums[i]+nums[j]+nums[k]);
                }
            }
        }
        return ans == INT_MAX ? -1:ans;
    }
};