class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;
        vector<int> ans;
        while(st<=end){
            if(nums[st]+nums[end]==target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(nums[st]+nums[end]>target)
                end--;
            else
                st++;
        }
        return ans;
    }
};