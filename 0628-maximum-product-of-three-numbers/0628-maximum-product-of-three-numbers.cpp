class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        sort(nums.begin(), nums.end());
        return max(nums[n-1]*nums[1]*nums[0],nums[n-3]*nums[n-2]*nums[n-1]);
    }
};